#include "main.h"

int natural_sqrt_recursion(int x, int y);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 *
 * Return: natural sqroot
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(i, n));
}

/**
 * natural_sqrt_recursion - finds the natural sqroot
 * @x: integer
 * @y: integr1
 *
 * Return: result
 */
int natural_sqrt_recursion(int x, int y)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (x);
	return (natural_sqrt_recursion(y, x + 1));
}
