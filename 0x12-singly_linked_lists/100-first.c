#include <stdio.h>

/**
 * print_first - Prints a string before the
 *        main function is executed.
 */
void __attribute__ ((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
