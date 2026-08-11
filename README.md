# Mini Docker Container Manager

## Project Description

Mini Docker Container Manager is a lightweight Docker-inspired container
management system developed using C and Linux.

The project provides a simple command-line interface through which users
can create, start, stop, remove and monitor application processes.

The project demonstrates core Operating System concepts such as process
management, memory management, signals, threads, file handling and
command parsing.

## Expected Outcome

The project will provide a lightweight command-line container manager
for creating, starting, stopping and monitoring application processes.

It will demonstrate practical implementation of core OSSP concepts using
C and Linux in a simplified Docker-inspired environment.

## Week 1

- Project repository setup
- Interactive REPL command-line interface
- Makefile-based build
- Git repository / GitHub version control

## Build and Run

```bash
make
make run
```

## Clean Build

```bash
make clean
```

## Week 1 Commands

```text
help
create <name>
start <name>
stop <name>
list
exit
```

## Project Structure

```text
MiniDocker/
├── README.md
├── Makefile
├── .gitignore
├── src/
│   └── main.c
├── include/
├── docs/
├── tests/
└── screenshots/
```
