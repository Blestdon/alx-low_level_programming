#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: count of args passed
 * @av: array of argumennts
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *new_string = NULL;

	int b = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);
	if (new_string != NULL)
	{
		while (b < i)
		{
			for (j = 0; av[b][j] != '\0'; j++)
				new_string[j + temp] = av[b][j];
			new_string[temp + j] = '\n';
			temp += (j + 1);
			b++;

		}
		new_string[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
}

/**
 * len - returns length of str
 * @str: string counted
 * Return: the length
 */

int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
