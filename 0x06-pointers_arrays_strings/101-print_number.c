#include "main.h"

/**
 * print_number - funtion that prints an integer
 * @n: n of integer
 */

void print_number(int n)
{
	unsigned int ni;

	if (n < 0)
	{
		ni = -n;
		_putchar('-');
	}
	else
	{
		ni = n;
	}

	if (ni / 10)
	{
		print_number(ni / 10);
	}
	_putchar((ni % 10) + '0');
}
