#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *maPtr;
	int count = 0, i = 0, len;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	len = count;
	maPtr = malloc((len * sizeof(char)) + 1);
	if (maPtr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		maPtr[i] = str[i];
	}
	maPtr[i] = '\0';
	return (maPtr);
	free(maPtr);
}
