#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by
*new line
*@separator: string to be printed between numbers
*@n: number of integer to be passed
*
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(l, int);
		printf("%d", num);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separtor);
		}
	}
	va_end(l);
	printf("\n");
}
