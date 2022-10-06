#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc, free
 * @ptr: pointer to mem previous allocated
 * @old_size: ptr size
 * @new_size: for the new memory
 * Return: resulting pointer otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nwptr;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nwptr = malloc(new_size);
		if (nwptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		nwptr = malloc(new_size);
		if (nwptr == NULL)
			return (nwptr);
		for (i = 0; i < old_size; i++)
			nwptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (nwptr);
}
