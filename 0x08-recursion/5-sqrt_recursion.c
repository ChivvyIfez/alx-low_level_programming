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
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
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
	{
		return (-1);
	}
	else if (x * x == y)
	{
		return (x);
	}
	return (natural_sqrt_recursion(y, x + 1));
}
