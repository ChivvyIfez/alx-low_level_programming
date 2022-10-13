#include "function_pointer.h"

/**
 * array_iterator - function that executes function as paramet.
 * @array: funtion array
 * @size: size of array function
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
