#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints mini coin to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: Result, 1 if argument is not one
 */

int main(int argc, char *argv[])
{
	int balance, cents;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	balance = 0;
	while (cents > 0)
	{
		if (cents - 25 >= 0)
			balance -= 25;
		else if (cents - 10 >= 0)
			balance -= 10;
		else if (cents - 5 >= 0)
			balance -= 5;
		else if (cents - 2 >= 0)
			balance -= 2;
		else if (cents - 1 >= 0)
			balance -= 1;
		balance++;
	}
	printf("%d\n", balance);
	return (0);
}
