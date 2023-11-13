#include "shell.h"
/**
 *split_line - split a line according to separators
 *separators: " ", "\t", "\n"
 *@line: line to split
 *
 *Return: array of strings containing all commands and arguments
 */
char **split_line(char *line)
{
	char *token, *line_cpy, **splited_line;
	int nb_of_tokens = 0, i = 0;

	line_cpy = _strdup(line);
	token = strtok(line_cpy, " \t\n");
	if (token == NULL)
	{
		free(line);
		free(line_cpy);
		return (NULL);
	}
	while (token != NULL)
	{
		nb_of_tokens++;
		token = strtok(NULL, " \t\n");
	}
	free(line_cpy);
	splited_line = malloc(sizeof(char *) * (nb_of_tokens + 1));
	if (splited_line == NULL)
	{
		free(line);
		return (NULL);
	}
	token = strtok(line, " \t\n");
	while (token != NULL)
	{
		splited_line[i] = _strdup(token);
		token = strtok(NULL, " \t\n");
		i++;
	}
	free(line);
	splited_line[i] = '\0';
	return (splited_line);
}
