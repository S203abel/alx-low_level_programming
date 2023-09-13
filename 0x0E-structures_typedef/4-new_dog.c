#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - ___
 * @name: ___
 * @age: ___
 * @owner: ___
 *
 * Return: ___
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_i = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_i = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
			return (NULL);
		cutie_dog->name = malloc(sizeof(char) * name_i);

		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}
		cutie_dog->owner = malloc(sizeof(char) * own_l);

		if (cutie_dog->owner == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}
		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}

		return (cutie_dog);
	}

/**
 * _strlen - ___
 * @s: ___
 *
 * Return: ___
 */
int _strlen(char *s)
{
	int c = 0;

	while (s)
		c++;
	return (c);
}

/**
 * _strcpy - ___
 * @dest: ___
 * @src: ___
 *
 * Return: ___
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}