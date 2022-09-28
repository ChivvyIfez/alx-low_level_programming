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
	if (n <= 1)
		return (0);
	return (the_prime_num(n, n - 1));
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
	if (x == 1)
		return (1);
	else if (y % x == 0 && x > 0)
	{
		return (0);
	}

	return (the_prime_num(y, x - 1));
}
