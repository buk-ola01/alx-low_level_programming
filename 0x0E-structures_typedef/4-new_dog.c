#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: Length of the string.
 */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
	{
		len += 1;
	}

	return (len);
}

/**
 * _strcpy - Copes a string pointed to by src to a buffer pointed to by dest
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog;
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *crt_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	crt_dog = malloc(sizeof(dog_t));
	if (crt_dog == NULL)
		return (NULL);

	crt_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (crt_dog->name == NULL)
	{
		free(crt_dog);
		return (NULL);
	}

	crt_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (crt_dog->owner == NULL)
	{
		free(crt_dog->name);
		free(crt_dog);
		return (NULL);
	}

	crt_dog->name = _strcpy(crt_dog->name, name);
	crt_dog->age = age;
	crt_dog->owner = _strcpy(crt_dog->owner, owner);

	return (crt_dog);
}
