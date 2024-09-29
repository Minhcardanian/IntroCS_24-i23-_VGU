```mermaid
flowchart TD
    Start((Start)) --> Input[/"Input two integers a, b"/]
    Input --> CheckEqual{Is a = b?}
    CheckEqual -->|Yes| ReturnA[Return a]
    CheckEqual -->|No| CheckAZero{Is a = 0?}
    CheckAZero -->|Yes| ReturnB[Return b]
    CheckAZero -->|No| CheckBZero{Is b = 0?}
    CheckBZero -->|Yes| ReturnA
    CheckBZero -->|No| CheckEven{Is a even?}
    CheckEven -->|Yes| CheckBEven{Is b even?}
    CheckBEven -->|Yes| RecurseBothEven[Call BinaryGCD(a/2, b/2); Multiply result by 2]
    CheckBEven -->|No| RecurseAEven[Call BinaryGCD(a/2, b)]
    CheckEven -->|No| CheckBOdd{Is b even?}
    CheckBOdd -->|Yes| RecurseBEven[Call BinaryGCD(a, b/2)]
    CheckBOdd -->|No| CompareAB{Is a > b?}
    CompareAB -->|Yes| RecurseAGreater[Call BinaryGCD((a - b)/2, b)]
    CompareAB -->|No| RecurseBGreater[Call BinaryGCD((b - a)/2, a)]
    RecurseBothEven --> ReturnResult
    RecurseAEven --> ReturnResult
    RecurseBEven --> ReturnResult
    RecurseAGreater --> ReturnResult
    RecurseBGreater --> ReturnResult
    ReturnA --> OutputResult[/"Print GCD: a"/]
    ReturnB --> OutputResult
    ReturnResult --> OutputResult
    OutputResult --> End((End))
