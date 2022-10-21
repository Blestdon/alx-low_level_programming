#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return: Always 0 success
 */
void print_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
