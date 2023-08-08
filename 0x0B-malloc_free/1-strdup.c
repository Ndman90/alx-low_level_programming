#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = (char *)malloc(sizeof(str) + 1);
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	*(ptr + i) = '\0';
	return (ptr);
	free(ptr);
}
