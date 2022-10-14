#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of its parameter
 * @n: number of argument to the function
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	va_end(list);

	return (sum);
}
