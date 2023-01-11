#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the arguments name, followed by a new line.
 * @argc: The number of arguments supplied in the program.
 * @argv: An array of pointers to the argument.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i <= 2; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
}

