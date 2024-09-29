flowchart TD
    A[Start] --> B[Input two numbers a, b]
    B --> C{Is a > b?}
    C -->|Yes| D[Set larger = a]
    C -->|No| E[Set larger = b]
    D --> F[Set lcm = larger]
    E --> F
    F --> H{Is lcm % a == 0 and lcm % b == 0?}
    H -->|No| I[Add larger to lcm]
    I --> H
    H -->|Yes| J[Return lcm]
    J --> K[Calculate GCD using GCD = a * b / LCM]
    K --> L[Output GCD]
    L --> M[End]
