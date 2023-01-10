#include <stdio.h>

/**
 * main - Prints the arguments name, followed by a new line.
 * @argc: The number of arguments supplied in the program.
 * @argv: An array of pointers to the argument.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
