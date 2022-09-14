#include <stdio.h>

/**
 * main - prints the first fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int i, j, k, nx;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		nx = k + j;
		j = k;
		k = nx;
	}
	return (0);
}
