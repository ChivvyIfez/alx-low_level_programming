#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: function parameter
 */

void puts_half(char *str)
{
	int i, j, k;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	if (k % 2 == 0)
	{
		i = k / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		} }
		else if (k % 2)
		{
			j = (k - 1) / 2;
			while (j < k - 1)
			{
				_putchar(str[j + 1]);
				j++;
			}
		}
		_putchar('\n');
	}
