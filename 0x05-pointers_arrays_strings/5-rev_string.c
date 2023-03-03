#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int l, j, i = 0, count = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	l = count;

	for (j = 0; j <= l / 2; j++)
	{
		c = s[j];
		s[j] = s[l - 1 - j];
		s[l - 1 - j] = c;
	}
}
