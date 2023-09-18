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
	if (n == 0)
	{
		return (0);
	}
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < 0; i++)
	{
		int num = va_arg(rgs, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
