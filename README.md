# ShellForge — Week 2

## Topic
**The C Toolchain & Memory Model — Dynamic string/vector types**

ShellForge is a small command-line shell project written in C.

## Week 1 Structure

```text
ShellForge/
├── src/
│   └── main.c
├── include/
│   └── shell.h
├── tests/
├── docs/
├── Makefile
├── README.md
├── LICENSE
└── .gitignore
```

## Week 2 Changes

Week 2 keeps the Week 1 files and adds dynamic input handling:

```text
ShellForge/
├── src/
│   ├── main.c        # updated
│   └── input.c       # NEW
├── include/
│   ├── shell.h       # updated
│   └── input.h       # NEW
├── tests/
├── docs/
├── Makefile
├── README.md
├── LICENSE
└── .gitignore
```

### Main Week 2 concepts

- Dynamic string input using `malloc()` and `realloc()`
- Dynamic argument vector using `char **`
- Header/source separation
- Manual memory cleanup with `free()`
- Basic command parsing
- C compilation through a Makefile

## Build

```bash
make
```

## Run

```bash
make run
```

## Test

```bash
make test
```

## Example

```text
ShellForge> help
ShellForge> echo hello world
hello world
ShellForge> info
ShellForge - Week 2
Dynamic input and argument-vector handling in C.
ShellForge> exit
```
