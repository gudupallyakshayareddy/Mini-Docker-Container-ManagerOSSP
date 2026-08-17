CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude
TARGET = shellforge

SRC = src/main.c src/input.c

all: $(TARGET)

$(TARGET): $(SRC) include/shell.h include/input.h
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	@echo "Running basic ShellForge test..."
	@printf "echo hello shellforge\ninfo\nexit\n" | ./$(TARGET)
