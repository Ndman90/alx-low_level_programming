#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int l, j, i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	l = count;

	for (j = 1; j <= l / 2; j++)
	{
		if (l % 2 == 0)
			_putchar(str[(l / 2) + (j - 1)]);
		else
			_putchar(str[(l - 1) / 2 + j]);
	}
	_putchar('\n');
}
