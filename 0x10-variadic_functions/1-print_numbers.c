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
	unsigned int x = 0;
	va_list vl;

	va_start(vl, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(vl, int));
		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
