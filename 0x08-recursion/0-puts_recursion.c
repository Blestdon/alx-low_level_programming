#include "main.h"

/**
 * _puts_recursion -  prints a string
 * @s: char to be printed
 * Return:  void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar('\n');
		_puts_recursion(s + 1);
	}
}
