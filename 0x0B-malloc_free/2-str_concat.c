#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *maPtr;
	int count1 = 0, count2 = 0,  i = 0, j = 0, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		count1++;
		i++;
	}
	len1 = count1;

	while (s2[j] != '\0')
	{
		count2++;
		j++;
	}
	len2 = count2;

	maPtr = malloc((len1 + len2 * sizeof(char)) + 1);

	if (maPtr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		maPtr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		maPtr[len1 + j] = s2[j];
	}
	maPtr[len1 + j] = '\0';
	return (maPtr);
	free(maPtr);
}
