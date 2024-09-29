```mermaid
flowchart TD
    Start((Start)) --> Input[/"Input two integers a, b"/]
    Input --> CheckEqual{"Is a = b?"}
    CheckEqual -->|Yes| ReturnA[Return a]
    CheckEqual -->|No| CheckAZero{"Is a = 0?"}
    CheckAZero -->|Yes| ReturnB[Return b]
    CheckAZero -->|No| CheckBZero{"Is b = 0?"}
    CheckBZero -->|Yes| ReturnA
    CheckBZero -->|No| CheckAEven{"Is a even?"}
    CheckAEven -->|Yes| CheckBEven{"Is b even?"}
    CheckBEven -->|Yes| RecurseBothEven["Call BinaryGCD(a / 2, b / 2), multiply result by 2"]
    CheckBEven -->|No| RecurseAEven["Call BinaryGCD(a / 2, b)"]
    CheckAEven -->|No| CheckBEven2{"Is b even?"}
    CheckBEven2 -->|Yes| RecurseBEven["Call BinaryGCD(a, b / 2)"]
    CheckBEven2 -->|No| CompareAB{"Is a > b?"}
    CompareAB -->|Yes| RecurseAGreater["Call BinaryGCD((a - b) / 2, b)"]
    CompareAB -->|No| RecurseBGreater["Call BinaryGCD((b - a) / 2, a)"]
    RecurseBothEven --> ReturnResult[Return result multiplied by 2]
    RecurseAEven --> ReturnResult
    RecurseBEven --> ReturnResult
    RecurseAGreater --> ReturnResult
    RecurseBGreater --> ReturnResult
    ReturnA --> OutputResult[/"Print GCD: a"/]
    ReturnB --> OutputResult
    ReturnResult --> OutputResult
    OutputResult --> End((End))
