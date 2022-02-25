#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - entry point.  prints numbers
* @separator: string being evaluated
* @n: number of integers being passed into function
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list vl;

	va_start(vl, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (x = 0; x < n; x++)
	{
		if (va_arg(vl, int) % 1 != 0)
		{
			break;
		}
		else
		{
			printf(separator == NULL ? "%d" : "%d%s", va_arg(vl, int), separator);
		}
	}
	printf("\n");
}
