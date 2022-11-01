#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers
 * @a: matrix
 */
void print_diagsums(int (*a)[4])
{
	int b, c;
	for (b = 0; b < 4; b++)
	{
		for (c = 0; c < 4; c++)
		{
			_putchar(*(*(b + a) + c));
		}
		_putchar('\n');
	}
}
