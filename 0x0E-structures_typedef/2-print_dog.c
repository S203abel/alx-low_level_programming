#include <stdio.h>
/**
 * print_dog - Prints all the data of a dog
 * @d: dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Breed: %s\n", d->owner);
	}
}
