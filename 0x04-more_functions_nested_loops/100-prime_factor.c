#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int x = 612852475143;
	long int pf;

	for (pf = 2; pf < x; pf++)
	{
		if (x % pf == 0)
		{
			x = x / pf;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
