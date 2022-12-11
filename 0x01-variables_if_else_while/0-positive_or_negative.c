#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point of the program
 *This program assign random numbers to variables
 *@n - is the random number
 *Return: Always o (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
