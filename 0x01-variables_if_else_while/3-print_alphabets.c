#include <stdio.h>

/**
 * main - The entry point
 * This program prints both uppercase and lowercase
 *	of the alphabet
 * @LU prints lowercase of alphabet
 * @UC prints uppercase of alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int LC, UC;

	for (LC = 'a'; LC <= 'z'; LC++)
	{
		putchar(LC);
	}
	for (UC = 'A'; UC <= 'Z'; UC++)
	{
		putchar(UC);
	}
	putchar('\n');

	return (0);
}
