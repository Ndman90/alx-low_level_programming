#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **maPtr;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	maPtr = malloc(sizeof(int *) * height);

	if (maPtr == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		maPtr[hgt_index] = malloc(sizeof(int) * width);

		if (maPtr[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(maPtr[hgt_index]);

			free(maPtr);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			maPtr[hgt_index][wid_index] = 0;
	}

	return (maPtr);
}
