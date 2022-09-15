#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print \
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		i = 0;
		while(i < n)
		{
			j = 0;
			while (j < n)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
