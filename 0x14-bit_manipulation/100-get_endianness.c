#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int num;
	char *endian;

	num = 1;
	endian = (char *)&num;

	return (*endian);
}

