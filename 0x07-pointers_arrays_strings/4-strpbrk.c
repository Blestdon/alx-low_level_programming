#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: sting where search is made
 * @accept: string where searched bytes are
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (accept[b] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
