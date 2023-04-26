#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *maPtr;

	maPtr = malloc(b * sizeof(int));
	if (maPtr == NULL)
		exit(98);
	else
		return (maPtr);
}
