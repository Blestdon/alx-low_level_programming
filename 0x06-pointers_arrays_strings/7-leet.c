#include "main.h"

/**
 * leet - encodes a string into 1337
 * @p: input
 *Return: value of p
 */
char *leet(char *p)
{
	int b, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; p[b] != '\n'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (p[b] == s1[c])
			{
				p[b] = s2[c];
			}
		}
	}
	return (p);
}
