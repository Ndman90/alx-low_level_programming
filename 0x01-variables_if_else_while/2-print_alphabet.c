#include <stdio.h>

/**
 * main - The entry point of the program
 * This program prints alphabet in lower cases
 * @ch is the variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
