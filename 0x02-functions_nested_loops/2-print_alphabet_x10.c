#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int letter;

	for (letter = 1; letter <= 10; letter++)
	{
		char letter2;

		for (letter2 = 'a'; letter2 <= 'z'; letter2++)
		{
			_putchar(letter2);
		}
		_putchar('\n');
	}
}
