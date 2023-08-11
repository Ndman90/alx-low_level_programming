#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	unsigned int i = 0, count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL || s2 == NULL)
		return ("");
	ptr = malloc(_strlen(s1) + n * sizeof(int) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];
	if (n <= _strlen(s2))
	{
		for (j = 0; j < n; j++)
			*(ptr + j + _strlen(s1)) = s2[j];
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			*(ptr + j + _strlen(s1)) = s2[j];
	}
	*(ptr + j + _strlen(s1)) = '\0';
	return (ptr);
}
