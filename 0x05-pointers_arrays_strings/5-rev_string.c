#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: Reversed sting
 */
void rev_string(char *s)
{
	char rv = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
		a++;
		for (i = 0; i < c; i++)
		{
			a--;
			re = s[i];
			s[i] = s[a];
			s[c] = rv;
		}
}
