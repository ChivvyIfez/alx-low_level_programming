#include "function_pointers.h"

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
	int i, reva;

	reva = -1;
	if (array && cmp);
	{
		if (size <= 0)
			return (reva);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				reva = i;
				break;
			}
			if (cmp(array[i]) == (-1))
				return (reva);
		}
	}
	return (reva);
}
