# IntroCS Group Repository Structure

## Directory Structure

The repository is organized into the following two main directories:

### 1. `Assignment/`
This directory contains all the assignments for the course. Each assignment will be stored in a subdirectory, and additional resources or reference materials specific to the assignments will also be provided here.


### 2. `Material/`
This directory houses all the course materials, including lecture slides, reading lists, and other learning resources provided throughout the course.

### Tree Structure

```bash
├── ASSIGNMENT
│   └── <assignment_name>
│       ├── <assignment_name>_pseudo.txt
│       ├── <assignment_name>_flowchart.md
│       ├── Solutions
│       │   └── <name>
│       │       ├── <file_type><assignment_name>.md
│       │       ├── <file_type><assignment_name>.c
│       │       └── <file_type><assignment_name>.md
│       └── Todo.md
├── MATERIAL
│   └── Detail.md
└── README.md
```

### ASSIGMENT 1: GCD Solutions by Members

| Member Name     | Solution File                                             | Language   | Type of Solution      |
|-----------------|-----------------------------------------------------------|------------|-----------------------|
| Minh Bui        | [MinhBui_Recursive.c](./Solutions/MinhBui/MinhBui_Recursive.c) | C          | Recursive Euclidean   |
| Trong Nhan      | [TrongNhan_GCD.c](./Solutions/AS1_TrongNhan/TrongNhan_GCD.c)  | C          | Iterative Subtraction |
| Huy             | [BinaryGCD_Huy.c](./Solutions/BinaryGCD_Huy/BinaryGCD_Huy.c)   | C          | Binary GCD (Stein’s Algorithm) |
| Huy (Alternate) | [NaiveGCD_Huy.c](./Solutions/NaiveGCD_Huy/NaiveGCD_Huy.c)     | C          | Naive Iterative       |
| Triet           | [Triet_sol_3.c](./Solutions/Triet_sol_3/Triet_sol_3.c)        | C          | Euclidean Iterative   |
