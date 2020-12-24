# Command Line Todo List
[![GitHub license](https://img.shields.io/github/license/FOSS-Cell-GECPKD/Todo-List?style=for-the-badge)](https://github.com/FOSS-Cell-GECPKD/Todo-List/blob/master/LICENSE)
[![GitHub issues](https://img.shields.io/github/issues/FOSS-Cell-GECPKD/Todo-List?style=for-the-badge)](https://github.com/FOSS-Cell-GECPKD/Todo-List/issues)
[![Join the chat at https://gitter.im/FOSS-Cell-GECPKD/Todo-List](https://img.shields.io/badge/chat-on%20gitter-blue?style=for-the-badge)](https://gitter.im/FOSS-Cell-GECPKD/Todo-List?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)


Thank you for showing interest in this project.This project is designed specially for beginners who has put there first step in opensource contribution. So feel free to contribute


In this project our aim is to implement a command-line (CLI) program that lets you manage your todos.

Here's how it should work when you're done:

![Demo of usage](https://github.com/FOSS-Cell-GECPKD/Todo-List/blob/main/ezgif.com-gif-maker_cls%20todo-list.gif)

## Getting started

1. Install CPP: You should have build support for cpp on your system.

2. You are expected to write the code in `todo.cpp` file.

3. Once you are done with the changes you should compile the code by running the following command from the terminal.

   **On Windows:**

   ```
   g++ -o todo todo.cpp
   ```
## Specification

1. The app can be run in the console with `./todo`.

2. The app should read from and write to a `todo.txt` text file. Each todo item occupies a single line in this file. Here is an example file that has 2 todo items.

```txt
water the plants
change light bulb
```

3.  When a todo item is completed, it should be removed from `todo.txt` and instead added to the `done.txt` text file. This file has a different format:

    ```txt
    x 2020-06-12 the text contents of the todo item
    ```

    1. the letter x
    2. the current date in `yyyy-mm-dd` format
    3. the original text

    The date when the todo is marked as completed is recorded in the `yyyy-mm-dd` format (ISO 8601). For example, a date like `15th August, 2020` is represented as `2020-08-15`.

## Usage

### 1. Help

Executing the command without any arguments, or with a single argument `help` prints the CLI usage.

```
$ ./todo help
Usage :-
$ ./todo add "todo item"  # Add a new todo
$ ./todo ls               # Show remaining todos
$ ./todo del NUMBER       # Delete a todo
$ ./todo done NUMBER      # Complete a todo
$ ./todo help             # Show usage
$ ./todo report           # Statistics
```

### 2. List all pending todos

Use the `ls` command to see all the todos that are not yet complete. The most recently added todo should be displayed first.

```
$ ./todo ls
[2] change light bulb
[1] water the plants
```

### 3. Add a new todo

Use the `add` command. The text of the todo item should be enclosed within double quotes (otherwise only the first word is considered as the todo text, and the remaining words are treated as different arguments).

```
$ ./todo add "the thing i need to do"
Added todo: "the thing i need to do"
```

### 4. Delete a todo item

Use the `del` command to remove a todo item by its number.

```
$ ./todo del 3
Deleted todo #3
```

Attempting to delete a non-existent todo item should display an error message.

```
$ ./todo del 5
Error: todo #5 does not exist. Nothing deleted.
```

### 5. Mark a todo item as completed

Use the `done` command to mark a todo item as completed by its number.

```
$ ./todo done 1
Marked todo #1 as done.
```

Attempting to mark a non-existed todo item as completed will display an error message.

```
$ ./todo done 5
Error: todo #5 does not exist.
```

### 6. Generate a report

Use the `report` command to see the latest tally of pending and completed todos.

```
$ ./todo report
yyyy-mm-dd Pending : 1 Completed : 4
```

## SETUP
Clone this repo!

Make a local clone of this repo, so you can work on it from your own computer.

```
git clone https://github.com/FOSS-Cell-GECPKD/Todo-List.git
```
Make your own branch<br/>
Do the changes<br/>
Commit the code with a proper message<br/> 
Push the code to the remote repository. <br/>
create the Pull Request, and wait for merge<br/>
Always make 1 PR at time.<br/> 

## How to Contribute

When you are ready to start work on an issue:

Let us know by leaving a comment on the issue.
Once you are assigned the issue (or once you have claimed the issue) only then proceed to make the Pull Request. This will help avoid multiple PRs pertaining to the same issue.
If you don't see your idea listed, do one of the following:

If your contribution is minor, such as a typo fix, open a pull request.
If your contribution is major, such as a new feature/enhancement, start by opening an issue first. This way, other people can be also involved in the discussion before you do any work.


## Community
Discussions about Todo-List takes place on <a href="https://gitter.im/FOSS-Cell-GECPKD/Todo-List">Gitter chat</a>. Anyone is welcome to join these conversations.


## Contributors
Thanks goes to these wonderful peoples.
<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->

<table>
  <tr>
    <td align="center"><a href="https://rishikeshrajrxl.github.io/#/"><img src="https://avatars1.githubusercontent.com/u/48375834?v=4" width="100px;" alt=""/><br /><sub><b>Rishikesh Raj</b></sub></a><br /><a href="#" title="Content">🖋</a> <a href="https://github.com/FOSS-Cell-GECPKD/Todo-List" title="Documentation">📖</a> <a href="https://github.com/Rishikeshrajrxl" title="Code">💻</a></td>
  </tr>
  </table>

