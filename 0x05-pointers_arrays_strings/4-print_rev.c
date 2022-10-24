#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int in = 0;

	while (s[in] != '\0')
	in++;
	for (in = in - 1; in >= 0; in--)
		putchar(p[in]);
		putchar('\n');
}
