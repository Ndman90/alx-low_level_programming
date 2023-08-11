#include <stdlib.h>
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
	char *ptr;
	unsigned int i = 0, count1 = 0, j = 0, count2 = 0, len1, len2;

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

	if (s1 == NULL || s2 == NULL)
		return ("");
	ptr = malloc(len1 + n * sizeof(int) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];
	if (n <= len2)
	{
		for (j = 0; j < n; j++)
			*(ptr + j + len1) = s2[j];
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			*(ptr + j + len1) = s2[j];
	}
	*(ptr + j + len1) = '\0';
	return (ptr);
	free(ptr);
}
