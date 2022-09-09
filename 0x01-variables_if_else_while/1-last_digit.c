#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of string
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lasd = n % 10;

	if (lasd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasd);
	}
	else if (lasd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasd);
	}
	else if (lasd < 6 && lasd != 0)
	{
		printf("Last digit of %d is %d ans is less than 6 and not 0\n", n, lasd);
	}
	return (0);
}
