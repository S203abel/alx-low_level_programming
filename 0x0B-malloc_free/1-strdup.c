#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated.
 * @str: char
 * return: On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 */
char *_strdup(char *str);
{
	char *s;
	int i, j;

	if (str == NULL || s == NULL)
		return (NULL);
		for (i = 0; str[i]; i++)
			j++;
		s = malloc(sizeof(char) * (j + 1))
			for (i = 0; str[i]; i++)
			{
				s[i] = str[i];
			}
		s[j] = '\0';

		return (s);
}
