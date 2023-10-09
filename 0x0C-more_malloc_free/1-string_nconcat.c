#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len;
	char *con;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;
	con = malloc(s1_len + n + 1);

	if (con == NULL)

		return (NULL);

	memcpy(con, s1, s1_len);
	memcpy(con + s1_len, s2, n);
	con[s1_len + n] = '\0';

	return (con);
}
