#include "main.h"

/**
 *reverse_array - reverses the array of integers
 *@a: an array of integers
 *@n: number of elements of the array
 *Return: rev
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
