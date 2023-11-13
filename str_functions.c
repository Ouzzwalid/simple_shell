#include "shell.h"
/**
 *  *_strdup - Returns a pointer to a copy of the string given as a parameter.
 *   *@str: the string
 *    *
 *     *
 *      *Return: the copy of th given string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);
	while (*(str + size) != '\0')
		size++;
	size++;
	cpy = malloc(size * sizeof(*str));
	if (cpy == NULL)
		return (NULL);
	for (; i < size; i++)
		cpy[i] = str[i];
	return (cpy);
}
