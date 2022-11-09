#includete_array "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: number of element array
 * @s: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int pposition;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (arry == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

