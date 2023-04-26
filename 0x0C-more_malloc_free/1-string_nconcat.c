#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1 = 0, count2 = 0, i = 0, lens1, lens2, j = 0;
	char *maPtr;

	while (s1[i] != '\0')
	{
		count1++;
		i++;
	}
	lens1 = count1;
	while (s2[j] != '\0')
	{
		count2++;
		j++;
	}
	lens2 = count2;

	maPtr = malloc((lens1 + n * sizeof(char)) + 1);
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
	for (j = 0; j < n; j++)
	{
		if (n >= lens2)
		{
			maPtr[lens1 + j] = *s2;
			s2++;
		}
		else
		{
			maPtr[lens1 + j] = s2[j];
		}
	}
	maPtr[lens1 + j] = '\0';
	return (maPtr);
}
