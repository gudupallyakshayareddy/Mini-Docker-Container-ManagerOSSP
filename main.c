#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 1024
#define MAX_NAME 100

void print_help(void) {
    printf("Commands:\n");
    printf("  create <name>  - Create a container\n");
    printf("  start <name>   - Start a container\n");
    printf("  stop <name>    - Stop a container\n");
    printf("  list           - List containers\n");
    printf("  help           - Show this help\n");
    printf("  exit           - Exit MiniDocker\n");
}

void process_command(char *input) {
    char command[MAX_NAME];
    char name[MAX_NAME];

    command[0] = '\0';
    name[0] = '\0';

    int count = sscanf(input, "%99s %99s", command, name);

    if (count <= 0) {
        return;
    }

    if (strcmp(command, "help") == 0) {
        print_help();
    } else if (strcmp(command, "create") == 0) {
        if (count < 2) {
            printf("Usage: create <name>\n");
        } else {
            printf("Container '%s' created.\n", name);
        }
    } else if (strcmp(command, "start") == 0) {
        if (count < 2) {
            printf("Usage: start <name>\n");
        } else {
            printf("Container '%s' started.\n", name);
        }
    } else if (strcmp(command, "stop") == 0) {
        if (count < 2) {
            printf("Usage: stop <name>\n");
        } else {
            printf("Container '%s' stopped.\n", name);
        }
    } else if (strcmp(command, "list") == 0) {
        printf("No containers currently running.\n");
    } else {
        printf("Unknown command: %s\n", command);
        printf("Type 'help' for available commands.\n");
    }
}

int main(void) {
    char input[MAX_INPUT];

    printf("=====================================\n");
    printf("       Mini Docker Container Manager\n");
    printf("=====================================\n");
    printf("Type 'help' to see available commands.\n\n");

    while (1) {
        printf("MiniDocker> ");

        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            printf("Exiting...\n");
            break;
        }

        process_command(input);
    }

    return 0;
}
