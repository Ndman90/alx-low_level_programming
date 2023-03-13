#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, i = 0, count = 0;

	while (dest[i] != '\0')
	{
		count++;
		i++;
	}
	l = count;

	for (i = 0; i < n; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
