#include "main.h"

/**
 * puts2 - prints one out of two characters
 *
 * @str: input
 * Return: 0ne out of two numbers
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}

