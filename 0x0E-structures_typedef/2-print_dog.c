#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Breed: %s\n", d->owner);
	}
}
