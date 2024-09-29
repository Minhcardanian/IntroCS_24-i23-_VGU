```mermaid
graph TD
    Start((Start)) --> Input[/"Input two integers a, b"/]
    Input --> WhileCheck{Is b ≠ 0?}
    WhileCheck -->|Yes| AssignTemp[Assign temp = b]
    AssignTemp --> AssignB[Assign b = a mod b]
    AssignB --> AssignA[Assign a = temp]
    AssignA --> WhileCheck
    WhileCheck -->|No| ReturnA[Return a]
    ReturnA --> OutputResult[/"Print GCD: a"/]
    OutputResult --> End((End))
