#include "main.h"

int natural_sqrt(int x, int y);

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
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (natural_sqrt(n, 2));
}

/**
 * natural_sqrt - finds the natural sqroot
 * @x: integer
 * @y: integr1
 *
 * Return: result
 */
int natural_sqrt(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + natural_sqrt(x, y + 1));
}
