#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @p: pointer
 * @Return: char
 */
char *string_toupper(char *p)
{
	int b;

	b = 0;
	while (p[b] != '\0')
	{
		if (p[b] >= 'a' && p[b] <= 'z')
			p[b] = p[b] - 32;
		b++;
	}
	return (p);
}
