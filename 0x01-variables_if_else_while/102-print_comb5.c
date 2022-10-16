#include <stdio.h>

/**
 *main - Print numbers from 0 to 99.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, o, u, h, op1, op2;

	i = o = u = h = op1 = op2;
	i = o = u = h = 48;
	while (h < 58)
{
	u = 48;
	while (u < 58)
	{
		o = 48;
		while (o < 58)
		{
			i = 48;
			while (i < 58)
			{
				op1 = (h * 10) + u;
				op2 = (o * 10) + i;
				if (op1 < op2)
				{
					putchar(h);
					putchar(u);
					putchar(' ');
					putchar(o);
					putchar(i);
					if (h == 57 && u == 56 && o == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			o++;
		}
		u++;
	}
	h++;
}

putchar('\n');
return (0);
}
