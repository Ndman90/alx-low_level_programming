#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * main - Prints the arguments name, followed by a new line.
 * @argc: The number of arguments supplied in the program.
 * @argv: An array of pointers to the argument.
 *
 * Return: 0 for success, otherwise return 1.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) % 1 == atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
