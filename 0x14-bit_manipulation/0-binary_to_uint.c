#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: it represents a binary number.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int strl, power = 1;

	if (b == NULL)
		return (0);

	if (*b != '1' && *b != '0')
		return (0);

	while (b[strl] != '\0')
		strl++;

	for (; strl > 0; strl--)
	{
		dec = dec + ((b[strl - 1] - '0') * power);
		power = power * 2;
	}
	return (dec);
}
