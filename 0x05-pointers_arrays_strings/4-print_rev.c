#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: parameter
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	k = i;

	j = k - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
