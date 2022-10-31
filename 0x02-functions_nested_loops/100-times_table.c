/**
 * print_times_table - prints the timeof the input.
 * @n: the value of the time table to be printed
 */
void print_times_table(int n)
{
	int b, c, x;

	for (b = 0; b <= n; b++)
	{
		for (c = 0; c <= n; c++)
		{
			x = b * c;
			if (x < 10)
				printf("%d   ", x);
			else if (x / 10 < 9)
				printf("%d  ", x);
			else
				printf("%d ", x);
		}
		printf("%d ", x);
	}
}
