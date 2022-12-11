#include <stdio.h>

/**
 * main - The entry ponit of the program
 * This program prints all numbers of base 16 in lowercase
 * @num prints the digit numbers from 0 to 9
 * @alphabet prints alphabet from a to f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, alphabet;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
