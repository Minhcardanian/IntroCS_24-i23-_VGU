```mermaid
flowchart TD
    Start((Start)) --> Input[/"Input two positive integers a, b"/]
    Input --> InitializeGCD[Initialize gcd = 1]
    InitializeGCD --> SetI[Set i = 1]
    SetI --> LoopCheck{"Is i &lt;= min(a, b)?"}
    LoopCheck -->|Yes| DivCheck{"Does a mod i = 0 and b mod i = 0?"}
    DivCheck -->|Yes| UpdateGCD[Set gcd = i]
    DivCheck -->|No| IncrementI[Set i = i + 1]
    UpdateGCD --> IncrementI
    IncrementI --> LoopCheck
    LoopCheck -->|No| ReturnGCD[Return gcd]
    ReturnGCD --> OutputResult[/"Print GCD: gcd"/]
    OutputResult --> End((End))


