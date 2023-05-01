#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string length
 * @string: string to check
 * Return: string length
 */
int _strlen(char *string)
{
	int i = 0, count = 0;

	while (string[i] != '\0')
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
	int i, j, num;
	char *maPtr;

	num = n;
	maPtr = malloc((_strlen(s1) + n * sizeof(char)) + 1);
	if (maPtr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		maPtr[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		if (num >= _strlen(s2))
		{
			maPtr[_strlen(s1) + j] = *s2;
			s2++;
		}
		else
		{
			maPtr[_strlen(s1) + j] = s2[j];
		}
	}
	maPtr[_strlen(s1) + j] = '\0';
	return (maPtr);
}
