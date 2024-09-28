```mermaid
flowchart TD
A[Start] --> B[Input a, b]
B --> C{Is a != 0 or b != 0?}
C --> Yes --> D[Return a + b] --> E[End]
C --> No --> F{a != b?}
F --> Yes --> G{a > b?}
G --> Yes --> H[a = a - b]
G --> C
G --> No --> I[b = b - a]
I --> C
F --> No --> J[Return a] --> K[End]