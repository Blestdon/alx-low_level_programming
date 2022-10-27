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
	while (n[b] != '\0')
	{
		if (n[b] >= 'a' && n[b] <= 'z')
			n[b] = n[b] - 32;
		b++;
	}
	return (n);
}
