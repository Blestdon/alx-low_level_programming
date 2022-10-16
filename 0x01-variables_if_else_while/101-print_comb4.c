#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Print all possible different combinations of three digits
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	int x1, x2, x3;

	for (x1 = 0; x1 < 8; x1++)
	{
		for (x2 = x1 + 1; x2 < 9; x2++)
		{
			for (x3 = x2 + 1; x3 < 10; x3++)
			{
			putchar((x1 % 10) + '0');
			putchar((x2 % 10) + '0');
			putchar((x3 % 10) + '0');

			if (x1 == 7 && x2 == 8 && x3 == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}

putchar ('\n');

return (0);
}
