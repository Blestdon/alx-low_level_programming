#include "main.h"

/**
 * _memset  - a function that fills memory with a constant byte
 * @n: bytes of memory area pointed by @s
 * @b: memory area pointer
 * @s: with constant byte @b
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
