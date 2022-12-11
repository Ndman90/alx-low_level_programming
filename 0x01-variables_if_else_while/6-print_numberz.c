#include <stdio.h>

/**
 * main - The entry point of the program
 * This program prints all single digits of base 10
 * @num prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}

