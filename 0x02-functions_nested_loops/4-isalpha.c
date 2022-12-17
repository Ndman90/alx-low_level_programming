#include "main.h"

/**
 * main - The entry point of the program.
 * This program checks for alphabetic character.
 * isalpha - checks if a character is alphabetic.
 * @c: The alphebet being printed.
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
