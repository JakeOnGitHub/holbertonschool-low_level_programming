#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - function to print strings
* @separator: string to print between strings
* @n: number of strings passed to function
* Return: If separator is NULL, print nothing.  string is NULL print (nil)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *ptr;

	va_list vl;

	va_start(vl, n);

	for (x = 0; x < n; x++)
	{
		ptr = va_arg(vl, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vl);
}
