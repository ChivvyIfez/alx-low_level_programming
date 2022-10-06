#include "main.h"
#include <stdio.h>

/**
 * create_array - creates and initializes array of chars
 * @size: size of array
 * @c: character
 * Return: pointer to the array
 * NULL when it fails and size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
