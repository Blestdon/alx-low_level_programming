#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
