#include "main.h"

/**
 * set_string - sets value of pointer to a char
 * @s: pointer to change
 * @to: string to change the pointer to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
