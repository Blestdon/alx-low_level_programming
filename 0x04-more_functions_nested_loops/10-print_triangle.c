#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */

void print_triangle(int n)
{
	int r, tri;

	if (n > 0)
	{
		for (r = 1; r <= n; r++)
		{
			for (tri = n - r; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < r; tri++)
				_putchar('#');
			if  (r == n)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
