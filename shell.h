#ifndef SHELL_H
#define SHELL_H

#define SHELL_NAME "ShellForge"
#define MAX_ARGS 64

void shell_run(void);
void shell_execute(char **argv, int argc);

#endif
