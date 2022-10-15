#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
		putchar(r);
		if (r != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
