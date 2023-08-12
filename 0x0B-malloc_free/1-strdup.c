#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated.
 * @str: char
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;
	s = malloc(sizeof(char) * (j + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}

	s[j] = '\0';

	return (s);
}
