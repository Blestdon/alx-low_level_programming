#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum number in an array
 * @max: maximum number in the array
 * Return: pointer to the adresss of the memory block
 */
int *array_range(int min, int max)
{
	int *block;
	int j, k = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (j = min; j <= max; j++)
		{
			block[k] = j;
			k++;
		}
		return (block);
	}
	else
		return (NULL);
}
