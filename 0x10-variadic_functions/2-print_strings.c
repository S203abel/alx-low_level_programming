#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - prints strings
*@separator: separator
*@n: number of strings
*
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	char *str;

		va_start(l, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(l, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(l);
	printf("\n");
}
