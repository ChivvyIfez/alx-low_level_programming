#include "3-calc.h"

/**
 * main - performs calculation
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success othereise Error(98)
 */
int main(int argc, char *argv[])
{
	int num1, num2, answer;
	char s;

	num1 = 0, num2 = 0, answer = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	s = argv[2][0];
	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	answer = (get_op_func(argv[2]))(num1, num2);
	printf("%d\n", answer);
	return (0);
}
