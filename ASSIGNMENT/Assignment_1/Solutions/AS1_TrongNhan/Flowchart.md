```mermaid
graph TD;
    Start((Start)) --> Input[/"Enter two positive integers: a, b"/]
    Input --> CheckZero{Is a == 0 or b == 0?}
    CheckZero -->|Yes| ReturnAorB[Return a + b]
    CheckZero -->|No| WhileLoop{"a != b"}
    WhileLoop -->|True| Compare{Is a > b?}
    Compare -->|Yes| SubtractB[Subtract b from a]
    Compare -->|No| SubtractA[Subtract a from b]
    SubtractB --> WhileLoop
    SubtractA --> WhileLoop
    WhileLoop -->|False| ReturnA[Return a]
    ReturnA --> OutputResult[/"Print GCD of a and b: gcd"/]
    OutputResult --> End((End))