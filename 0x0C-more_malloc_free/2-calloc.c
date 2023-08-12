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
	void *ptr;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	for (i = 0; i < (nmemb * size); i++)
		*(temp + i) = 0;
	return (ptr);
	free(ptr);
}
