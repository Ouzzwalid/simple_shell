#include "shell.h"
/**
 *main - Simple Shell program
 *@ac: number of arguments
 *@argv: array of arguments
 *
 *Return: Alway 0(succes)
 */
int main(int ac, char **argv)
{
	char *line, **command;
	int result = 0;
	(void) ac;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		line = get_line();
		if (line == NULL)/* End of file (Ctrl + D */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (result);
		}
		command = split_line(line);
		if (command == NULL)
			continue;
		result = exec_cmd(command, argv);
	}
	return (0);
}
