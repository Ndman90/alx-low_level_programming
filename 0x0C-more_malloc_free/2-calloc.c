#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *maPtr;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	maPtr = malloc(nmemb * size);
	if (maPtr == NULL)
		return (NULL);
	ptr = maPtr;
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (maPtr);
	free(maPtr);
}
