#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: minimum array
 * @max: maximum array
 * Return: resulting pointer of arrays otherwise NULL
 */
int *array_range(int min, int max)
{
	int i, arrge;
	int *ptr;

	arrge = 0;

	if (min > max)
		return (NULL);
	arrge = ((max + 1) - min);

	ptr = malloc(sizeof(int) * arrge);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < arrge; i++)
		*(ptr + i) = min + i;

	return (ptr);
}
