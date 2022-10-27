#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int c;

	b = 0;
	while (dest[b] != '\0')

	{
		b = b + 1;
	}

	c = 0;
	while (src[c] != '\0')
	{
		dest[b] = src[c]
		b = b + 1;
		c = c + 1;
	}

	dest[b] = '\0';
	return (dest);
}
