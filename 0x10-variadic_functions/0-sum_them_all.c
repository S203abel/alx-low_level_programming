#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}