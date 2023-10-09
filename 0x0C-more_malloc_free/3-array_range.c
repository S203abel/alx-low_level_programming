#include <stdlib.h>
#include "main.h"
/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
	int *ar;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	int i = 0;
	for (i = 0; i <= max - min; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
