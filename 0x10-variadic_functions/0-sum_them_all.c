#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list l;
	unsigned int i;

	va_start(l, n);

	if (n != 0)
	{
	for (i = 0; i < 0; i++)
		int sum = va_arg(l, int);
	}
	va_end(l);
	return (sum);
}
