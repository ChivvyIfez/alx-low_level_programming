#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of memory bytes
 * @size: memory size
 * Return: resulting pointer otherwise NULL, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		*((char *)(ptr) + i) = 0;
		i++;
	}
	return (ptr);
}
