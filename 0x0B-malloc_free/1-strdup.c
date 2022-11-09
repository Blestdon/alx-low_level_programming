#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be copied
 *
 * Return: returns a pointer to the duplicated string
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *cp;
	int index, lgt;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		lgt++;
	cp = malloc(sizeof(char) * (lgt + 1));

	if (cp == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cp[index] = str[index];
	}
	cp[lgt] = '\0';

	return (cp);

}
