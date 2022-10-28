#include <stdio.h>

/**
 * main - Prints combination of 3 numbers
 *
 * Return: 0 Always
 */
int main(void)
{
	int a, d, h;

	for (a = '0'; a <= '9'; a++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (h = '0'; h <= '9'; h++)
			{
				if (a < d && d < h)
				{
					putchar(a);
					putchar(d);
					putchar(h);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
