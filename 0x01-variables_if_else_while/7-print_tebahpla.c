#include <stdio.h>

/**
 * main - The entry point of the program
 * This program prints lowercase alphabet
 *	in reverse direction
 * @alphabet prints reverse lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
