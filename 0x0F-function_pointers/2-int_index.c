#include "function_pointer.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integer
 * @size: number of element in array
 * @cmp: pointer to function
 * Return: index of the first element
 * -1 if no element matches and size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if ((cmp(array[i])) > 0)
			{
				i == (-1);
				break;
			}
			if ((cmp(array[i])) == (-1))
				return (-1);
		}
	}
	return (-1);
}
