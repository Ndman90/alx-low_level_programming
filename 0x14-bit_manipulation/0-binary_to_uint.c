#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (b == NULL)
		return (0);
	for (n = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			n = n << 1;
		}
		else if (*b == '1')
		{
			n = n << 1;
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
