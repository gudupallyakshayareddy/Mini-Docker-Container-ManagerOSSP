#ifndef INPUT_H
#define INPUT_H

/*
 * Reads a complete line from stdin using dynamically allocated memory.
 * The returned string must be released with free().
 */
char *input_read_line(void);

/*
 * Splits a command line into whitespace-separated arguments.
 * The returned argument vector and its strings must be released with
 * input_free_args().
 */
char **input_parse_args(const char *line, int *argc);

void input_free_args(char **argv, int argc);

#endif
