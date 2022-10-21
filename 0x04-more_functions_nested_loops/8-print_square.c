#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, o;

		for (x = 0; x < size; x++)
			for (o = 0; o < size; o++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
}
