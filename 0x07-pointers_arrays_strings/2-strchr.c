#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @c: occurrence of char
 * @s: in string
 * Return: a pointer to the first occurrence of the characteri
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}
