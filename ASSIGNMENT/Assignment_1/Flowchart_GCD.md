```mermaid
flowchart TD
    A[Start] --> B[Input a, b]
    B --> C{Is b != 0?}
    C -- Yes --> D[temp = b]
    D --> E[b = a mod b]
    E --> F[a = temp]
    F --> C
    C -- No --> G[Return a]
    G --> H[End]