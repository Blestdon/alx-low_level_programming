#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}

		putchar('\n');
	}
}

