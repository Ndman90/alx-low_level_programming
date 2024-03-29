#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);

	return (count +  _strlen_recursion(s + 1));
}
