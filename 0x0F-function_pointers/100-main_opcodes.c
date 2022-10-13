#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of its own function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Erro\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
