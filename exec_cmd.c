#include "shell.h"
/**
 *exec_cmd - executes the command line
 *@command: array of strings containing commands
 *@argv: array containing arguments
 *
 *Return: the exit status
 *
 */
int exec_cmd(char **command, char **argv)
{
	pid_t child;
	int status, result;

	child = fork();
	if (child == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			freeArray(command);
			exit(100);
		}
	}
	else
	{
		wait(&status);
		freeArray(command);
		result = WEXITSTATUS(status);
	}
	return (result);
}
