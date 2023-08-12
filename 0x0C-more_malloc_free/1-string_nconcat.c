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
	int i = 0, count = 0;

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
	int i, j;
	int num = n;

	if (s1 == NULL)
	       s1 = ""; 
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	ptr = malloc(_strlen(s1) + num * sizeof(int) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];
	if (num <= _strlen(s2))
	{
		for (j = 0; j < num; j++)
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
