#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the  first string to concatnates
 * @s2: the second string to concatenates.
 * Return: a pointer to a newly allocated memory block
 * containing the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		k++;
	cat = malloc(sizeof(char) * k);

	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		cat[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		cat[j++] = s2[i];
	return (cat);
}
