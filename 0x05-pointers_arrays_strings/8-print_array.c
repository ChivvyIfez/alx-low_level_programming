#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of array followed by a new line
 * @a: int 1 array to be printed
 * @n: int 2 number of element to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
		i++;
	}
	printf("\n");
}
