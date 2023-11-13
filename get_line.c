#include "shell.h"
/**
 *get_line - reads the line from standard input
 *
 *Return: the line read
 */
char *get_line(void)
{
	char *line;
	size_t len = 0;
	ssize_t n;

	n = getline(&line, &len, stdin);
	if (n == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
