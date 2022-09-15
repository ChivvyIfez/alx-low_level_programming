#include <stdio.h>

/**
 * main - prints from 1 to 100 followed by a new line
 * for multiples of three prints Fizz and five print Buzz
 * Return: Always 0 (Success)
 */

in main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
