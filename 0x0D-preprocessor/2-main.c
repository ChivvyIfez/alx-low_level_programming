#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of file it was compile from
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}