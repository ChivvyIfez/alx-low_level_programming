#include <stdio.h>

/**
 * main - prints fibonacci
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int j, k, nxt, sum;
	int i;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 0; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		nxt = j + k;
		j = k;
		k = nxt;
	}
	printf("%lu\n", sum);
	return (0);
}
