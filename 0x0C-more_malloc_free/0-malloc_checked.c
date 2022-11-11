#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory block to be alocated
 *
 * Return: poiter to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
