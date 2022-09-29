#include "main.h"

int prime_num(int x, int y);

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
	return (prime_num(n, 2));

/**
 * prime_num - prints prime numbers
 * @x: num
 * @y: num1
 *
 * Return: 1 if yes and 0 otherwise
 */
int prime_num(unsigned int x, unsigned int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);
		else
			return (0);
	}
	return (0 + prime_num(x, y + 1));
}
