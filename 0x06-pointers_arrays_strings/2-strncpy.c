#include "main.h"

/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len, count = 0, i;

	while (src[i] != '\0')
	{
		i++;
		count++;
	}
	src_len = count;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = src_len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
