#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');

	return (0);
}
