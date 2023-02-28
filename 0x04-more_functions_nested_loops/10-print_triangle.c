#include "main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');

	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if ((i + j) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
