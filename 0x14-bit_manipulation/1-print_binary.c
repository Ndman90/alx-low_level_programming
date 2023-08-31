#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
	int value;

	if (n < 2)
		_putchar(n + '0');
	else
	{
		value = (n / 2);
		print_binary(value);
		_putchar((n % 2) + '0');
	}
}
