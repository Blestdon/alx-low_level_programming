#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * return: int
 */
int _strlen_recursion(char *s)
{
	int b = 0;

	if (*s)
	{
		b++;
		b  += _strlen_recursion(s + 1);

	}
	return (b);
}
