#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: num of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int c;

	while (dest[b] != '\0')
	{
		b++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[b] = src[c];
		b++;
		c++;
	}
	dest[b] = '\0';
	return (dest);
}

