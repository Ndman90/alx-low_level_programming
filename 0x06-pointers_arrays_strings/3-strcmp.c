#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, value = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		value = s1[i] - s2[i];
		return (value);
	}
	return (0);
}