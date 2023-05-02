#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int *maPtr;
	int i, size = 0;

	size = (max - min) + 1;
	maPtr = malloc(size * sizeof(int));
	if (maPtr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		maPtr[i] = min + i;
	}
	return (maPtr);
}
