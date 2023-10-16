#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0, l;

	while (dest[i] != '\0')
	{
		count++;
		i++;
	}
	l = count;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
