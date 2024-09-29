# IntroCS Group Repository Structure

## Directory Structure

The repository is organized into the following two main directories:

### 1. `Assignment/`
This directory contains all the assignments for the course. Each assignment will be stored in a subdirectory, and additional resources or reference materials specific to the assignments will also be provided here.


### 2. `Material/`
This directory houses all the course materials, including lecture slides, reading lists, and other learning resources provided throughout the course.

### Git Commands Reference Table

| Action                                    | Command                                                      | Description                                                                                     |
|-------------------------------------------|--------------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Clone the repository**                  | `git clone https://github.com/Minhcardanian/IntroCS_24-i23-_VGU.git` | Creates a local copy of the remote repository on your machine.                                  |
| **Check the status of the repository**    | `git status`                                                 | Shows the current state of the working directory, including untracked or modified files.         |
| **Add changes to staging area**           | `git add .`                                                  | Stages all changes for the next commit. You can also add specific files instead of `.`.          |
| **Commit the changes**                    | `git commit -m "Your commit message"`                        | Commits the staged changes to the repository with a descriptive message.                        |
| **Fetch updates from remote**             | `git fetch origin`                                           | Fetches the latest changes from the remote repository without merging them.                     |
| **Merge fetched changes**                 | `git merge origin/main`                                      | Merges the changes from the `main` branch of the remote repository into your local branch.       |
| **Pull latest changes**                   | `git pull origin main`                                       | Fetches and merges the latest changes from the `main` branch of the remote repository.           |
| **Pull with no rebase (resolve divergence)** | `git pull --no-rebase origin main`                            | Pulls the latest changes from `origin/main` and merges them without rebasing.                   |
| **Pull with rebase (resolve divergence)**   | `git pull --rebase origin main`                                | Pulls the latest changes and rebases your local commits on top of them.                         |
| **Push changes to the remote**            | `git push origin main`                                       | Pushes the local commits to the remote `main` branch.                                            |
| **Check logs of commits**                 | `git log`                                                    | Displays the commit history.                                                                    |

### Notes on Resolving Divergence

- Use `git pull --no-rebase origin main` to merge remote changes without altering your commit history. This is the default behavior.
- Use `git pull --rebase origin main` if you want to reapply your local commits on top of the latest remote commits, keeping a linear history. This may require resolving conflicts.

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

Slide URL: [GCD](https://www.canva.com/design/DAGR8jy0tUk/l16knP82W1_KS0H2Khpp9g/view?utm_content=DAGR8jy0tUk&utm_campaign=designshare&utm_medium=link&utm_source=editor)
