```mermaid
graph TD;
    Start[Start] --> |Enter two integers| InputAandB[Input a, b]
    InputAandB --> CallGCD[Call GCD(a, b)]
    CallGCD --> CheckB{Is b = 0?}
    CheckB -->|Yes| ReturnA[Return a]
    CheckB -->|No| ModAB[Calculate a % b]
    ModAB --> RecurseGCD[Call GCD(b, a % b)]
    RecurseGCD --> CheckB
    ReturnA --> PrintResult[Print result]
    PrintResult --> End[End]
