#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int ta, ku, azu;

	for (ta = 0; ta <= 9; ta++)
	{
		_putchar('0');

		for (ku = 1; ku <= 9; ku++)
		{
			_putchar(',');
			_putchar(' ');

			azu = ta * ku;

			if (azu <= 9)
				_putchar(' ');
			else
				_putchar((azu / 10) + '0');
			_putchar((azu % 10) + '0');
		}
		_putchar('\n');
	}
}
