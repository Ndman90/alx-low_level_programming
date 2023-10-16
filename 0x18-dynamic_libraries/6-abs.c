#include "main.h"

/**
 * _abs - computes the absolute value of integer
 * @n: The integer to be computed
 *
 * Return: The absolute value of the integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	else
	{
		n  = n * 1;
	}
	return (n);
}
