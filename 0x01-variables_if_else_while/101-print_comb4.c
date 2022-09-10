#include <stdio.h>

/**
 * main - Prints combinations
 *
 * Return: Always (Success)
 */

int main(void)
{
	int a, n, i;

	for (n = 48; n < 58; n++)
	{
		for (a = 49; a < 58; a++)
		{
			for (i = 50; i < 58; i++)
			{
				if (i > a && a > n)
				{
					putchar(n);
					putchar(a);
					putchar(i);

					if (n != 55 || a != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
