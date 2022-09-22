#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: array to be reversed
 * @n: n element of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;

	i = 0;
	while (i < n / 2)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
		i++;
	}
}
