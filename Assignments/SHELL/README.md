# To-Do Script

This Bash script, named "To-Do.sh," is a simple command-line tool for managing a to-do list. It allows you to add, delete, view, and mark tasks as done within a to-do list file.

## How to Use

You can use this script by running it from the command line with the following syntax:

```bash
./To-Do.sh [option] [task]
```

Here's a breakdown of the available options:

### 1. Add a Task

To add a new task to the to-do list, use the `add` option:

```bash
./To-Do.sh add "Your new task description"
```

- Example: `./To-Do.sh add "Buy groceries"`
- This will add the task to the to-do list file and display a confirmation.

### 2. Delete a Task

To delete a task from the to-do list, use the `delete` option with the task number:

```bash
./To-Do.sh delete [task number]
```

- Example: `./To-Do.sh delete 3`
- This will remove the task with the specified number from the to-do list.

### 3. View Tasks

To view all the tasks in the to-do list, use the `view` option:

```bash
./To-Do.sh view
```

- This will display a list of tasks, indicating completed tasks with a green checkmark (✔) and incomplete tasks with a dash (-).

### 4. Mark Task as Done

To mark a task as done in the to-do list, use the `done` option with the task number:

```bash
./To-Do.sh done [task number]
```

- Example: `./To-Do.sh done 2`
- This will mark the specified task as done by adding "DONE" in front of the task description.

### 5. Usage Message

If you run the script without any options or with an invalid option, it will display a usage message, listing the available options and their descriptions.

```bash
./To-Do.sh
```

## To-Do List File

The script uses a default file named `todo.txt` to store the to-do list. You can modify the `todo_file` variable in the script to change the filename.

**Note:** 
- The script checks for valid inputs and provides error messages if you don't provide the required arguments or if you enter invalid task numbers.
- Completed tasks are marked with "DONE" at the beginning of the line in the to-do list file.
- The script uses ANSI color codes to highlight completed and incomplete tasks in the terminal for better visibility.
