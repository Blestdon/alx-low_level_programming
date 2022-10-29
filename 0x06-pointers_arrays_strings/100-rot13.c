#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: address of string s
 */
char *rot13(char *s)
{
	int y, z;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (y = 0; *(s + y); y++)
	{
		for (z = 0; z < 52; z++)
		{
			if (a[z] == *(s + y))
			{
				*(s + y) = b[z];
				break;
			}
		}
	}
	return (s);
}
