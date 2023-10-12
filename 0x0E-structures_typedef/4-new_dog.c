#include "dog.h"
#include <stdlib.h>
#include <string.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = (char *)malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return NULL;
	}
	new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return NULL;
	}
	strcpy(new_dog->owner, owner);
	strcpy(new_dog->name, name);
	new_dog->age = age;
	return new_dog;
}
