#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

char *get_line(void);
char **split_line(char *line);
int exec_cmd(char **command, char **argv);

void freeArray(char **arr);
void freeArray(char **arr);
/* string functions */
char *_strdup(char *str);

#endif
