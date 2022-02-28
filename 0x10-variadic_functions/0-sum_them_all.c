#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - entry point.  returns sum of characters
* @n: integer being evaluated
* Return: 0 if 0, otherwise return the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int sum = 0;

	va_list vl;

	va_start(vl, n);

	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < n; x++)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);
	return (sum);
}
