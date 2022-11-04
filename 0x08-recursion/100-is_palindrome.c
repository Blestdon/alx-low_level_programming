#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to the string params
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pd - palindrome
 * @s: pointer to the string
 * @l: position
 * Return: boolena
 */
int pd(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + 1))
	{
		return (pd(s + 1, 1 - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s:pointer to the string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pd(s, len - 1));
}
