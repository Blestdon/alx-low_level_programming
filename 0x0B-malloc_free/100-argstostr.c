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
	char *string1 = NULL;

	int b = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (len(av[ac]) + 1);
		string1 = (char *) malloc(sum + 1);
	if (string1 != NULL)
	{
		while (b < i)
		{
			for (j = 0; av[b][j] != '\0'; j++)
				string1[j + temp] = av[b][j];
			string1[temp + j] = '\n';
			temp += (j + 1);
			b++;

		}
		string1[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (string1);
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
