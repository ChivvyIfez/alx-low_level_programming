#include "main.h"

int the_prime_num(int x, int y);

/**
 * is_prime_number - returns 1 if the input is prime number
 * or 0 if its not a prime number
 * @n: number
 *
 * Return: 1 if yes and 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	return (the_prime_num(i, n));
}

/**
 * the_prime_num - prints prime numbers
 * @x: num
 * @y: num1
 *
 * Return: 1 if yes and 0 otherwise
 */
int the_prime_num(int x, int y)
{
	if (x != 1)
	{
		if (x == y)
			return (1);
		else if (x % y == 0 || x < 1)
			return (0);
		else
			return (the_prime_num(y + 1, x));
	} else
		return (0);
}
