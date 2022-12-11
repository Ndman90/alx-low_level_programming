#include <stdio.h>

/**
 * main - The entry point of the program
 * This program prints single base 10 number digits
 *	separated by comma and space
 * @num prints single base 10 number digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
