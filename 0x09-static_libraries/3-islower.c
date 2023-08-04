#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: letter to be checked
 *
 * Return: 1 if character is lowercase, otherwisw 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
