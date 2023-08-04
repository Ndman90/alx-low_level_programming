#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents;

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		int num_coins;

		num_coins = 0;

		num_coins += cents / 25;
		cents %= 25;

		num_coins += cents / 10;
		cents %= 10;

		num_coins += cents / 5;
		cents %= 5;

		num_coins += cents / 2;
		cents %= 2;

		num_coins += cents;

		printf("%d\n", num_coins);
	}
	return (0);
}
