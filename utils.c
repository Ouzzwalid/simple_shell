#include "shell.h"
/**
 *freeArray - frees an array of strings
 *
 *@arr: The array
 *
 *
 */
void freeArray(char **arr)
{
	int i;

	if (arr == NULL)
		return;
	for (i = 0; arr[i] != NULL; i++)
		free(arr[i]);
	free(arr);
}
