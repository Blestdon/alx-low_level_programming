#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers
 * @a: matrix
 */
void print_diagsums(int (*a)[8])
{
	int b, c;
	for (b = 0; a[b][7]; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
