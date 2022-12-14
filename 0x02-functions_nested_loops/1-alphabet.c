#include "main.h"

/**
 * main - The entry point of the program
 * print_alphabet: prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}
