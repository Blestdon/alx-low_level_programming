#include "main.h"

/**
 * factorial - returns the factorial of int
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	int b;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		b = n * factorial(n - 1);
	}
			return (b);
}

