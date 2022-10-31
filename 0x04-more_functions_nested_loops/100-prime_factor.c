#include <stdio.h>
#include "main.h"

/**
* main - Prints largest prime factor of 612852475143
* Return: 0 A
*/

int main(void)
{
	long num = 612852475143;
	int i = 2;

	for (; i < num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
