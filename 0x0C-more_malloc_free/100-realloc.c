#include "main.h"

/**
 * _realloc - a program that multiplies two positive numbers
 * @ptr: pointer to the memory previously allocated with a cell
 * @old_size: size of ptr
 * @new_size: size of the new memory to be allocated
 *
 * Return: pointer to the address of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int j;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (j = 0; j < min(old_size, new_size); j++)
				*((char *)temp_block + j) = *((char *) ptr + j);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
