#include "main.h"

int _strlen_recursion(char *s);
int checker(char *s, int a, int b);

/**
 * is_palindrome - returns string palindrome
 * @s: string
 * Return: 1 if s is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - checks each character
 * @s: string to be checked
 * @a: checker
 * @b: checker1
 * Return: 0
 */
int checker(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + checker(s, a + 1, b - 1));
	}
	return (0);
}
