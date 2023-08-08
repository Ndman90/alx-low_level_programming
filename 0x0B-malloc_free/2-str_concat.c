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
	char *ptr;
	int i, j, x, y, len1, len2, count1 = 0, count2 = 0;

	while(s1[i] != '\0')
	{
		count1++;
		i++;
	}
	len1 = count1;

	while(s2[j] != '\0')
	{
		count2++;
		j++;
	}
	len2 = count2;

	ptr = (char *)malloc(len1 + len2 * sizeof(char));
	if(ptr == NULL)
		return(NULL);
	if(s1 == NULL || s2 == NULL)
		return ("");
	for(x = 0; s1[x] != '\0'; x++)
		*(ptr + x) = s1[x];
	for(y = 0; s2[y] != '\0'; y++)
	{
		*(ptr + y + len1) = s2[y];
	}
	*(ptr + y + len1) = '\0';
	return (ptr);
	free(ptr);
}
