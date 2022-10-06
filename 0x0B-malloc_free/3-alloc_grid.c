#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a ptr to a 2dim array
 * @width: array rows
 * @height: array columns
 * Return: resulting ptr, NULL when 0 or -ve and on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);

	if (array == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
