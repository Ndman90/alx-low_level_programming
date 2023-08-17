#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_numbers;

	va_start(sum_numbers, n);

	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(sum_numbers, int);
	return (sum);

	va_end(sum_numbers);
}
