#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * 10 times.
 * Return: 0 Always
 */
void more_numbers(void)
{
	int i, h;

	for (i = 0; i <= 9; i++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h > 9)
			{
				_putchar((h / 10) + '0');
			}
			_putchar((h % 10) + '0');
		}

		putchar('\n');
	}
}

