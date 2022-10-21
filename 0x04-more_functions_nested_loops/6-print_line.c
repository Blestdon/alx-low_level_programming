# include "main.h"

/**
 * print_line - prints a stright line with '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int ye;

	if (n > 0)
	{
		for (ye = 0; ye < n; ye++)
			_putchar('_');
	}

	_putchar('\n');
}
