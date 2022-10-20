#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n:prints the value of the time take.
 */
void print_times_table(int n)
{
	int ta, ku, asa;

	if (n >= 0 && n <= 15)
	{
		for (ta = 0; ta <= n; ta++)
		{
			_putchar('0');
			for (ku = 1; ku <= n; ku++)
			{
				_putchar(',');
				_putchar(' ');
				asa =  ta * ku;
				if (asa <= 99)
					_putchar(' ');
				if (asa <= 9)
					_putchar(' ');

				if (asa <= 200)
				{
					_putchar((asa / 100) + '0');
					_putchar(((asa / 10)) % 10 + '0');
				}
				else if (asa <= 99 && asa >= 10)
				{
					_putchar((asa / 10) + '0');
				}
				_putchar((asa % 10) + '0');
			}
			_putchar((asa % 10) + '0');
		}
		_putchar('\n');
	}
}
