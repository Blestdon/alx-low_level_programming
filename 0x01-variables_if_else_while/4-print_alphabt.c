#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	if (l != 'e' && l != 'q')
		putchar(l);
	}
	putchar('\n');

	return (0);
}
