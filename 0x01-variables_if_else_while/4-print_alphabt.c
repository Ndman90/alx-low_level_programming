#include <stdio.h>

/**
 * main - The entry point of the program
 * This program prints the lowercase alphabet
 *	except e and q
 * @LC prints the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int LC;

	for (LC = 'a'; LC <= 'z'; LC++)
	{
		if (LC != 'q' && LC != 'e')
			putchar(LC);
	}
	putchar('\n');

	return (0);
}
