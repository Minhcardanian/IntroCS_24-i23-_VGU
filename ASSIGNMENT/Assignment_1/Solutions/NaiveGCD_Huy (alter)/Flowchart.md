```mermaid
flowchart LR
    Start((Start)) --> Input[/"Input a, b"/]
    Input --> InitGCD["gcd = 1, i = 1"]
    InitGCD --> LoopCheck{"i ≤ min(a, b)?"}
    
    subgraph Loop
        LoopCheck -->|Yes| DivCheck{"a % i = 0 and b % i = 0?"}
        DivCheck -->|Yes| UpdateGCD["gcd = i"]
        DivCheck -->|No| IncrementI["i = i + 1"]
        UpdateGCD --> IncrementI
        IncrementI --> LoopCheck
    end
    
    LoopCheck -->|No| ReturnGCD["Return gcd"]
    ReturnGCD --> Output[/"Print GCD"/]
    Output --> End((End))

