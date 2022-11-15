#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of string
 * @str: string
 * Return: the length ofthe string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - copies a string pointed to by src
 * @dest: the buffer storing the string copy
 * @src: source string
 *
 * Return: The pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogit;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogit = malloc(sizeof(dog_t));
	if (dogit == NULL)
		return (NULL);

	dogit->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogit->name == NULL)
	{
		free(dogit);
		return (NULL);
	}

	dogit->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogit->owner == NULL)
	{
		free(dogit->name);
		free(dogit);
		return (NULL);
	}
	dogit->name = _strcopy(dogit->name, name);
	dogit->age = age;
	dogit->owner = _strcopy(dogit->owner, owner);

	return (dogit);
}
