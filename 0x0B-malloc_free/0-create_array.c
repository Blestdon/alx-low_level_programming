#include "main.h"

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: char to insert
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int index;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		buffer[index] = c;

	return (buffer);
}

