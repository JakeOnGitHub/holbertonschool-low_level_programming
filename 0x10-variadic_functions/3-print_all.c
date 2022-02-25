#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_all - entry point. prints everything
* @format: lists all types of arguments
* Return: Nil is string is NULL.  Otherwise return the string
*/

void print_all(const char * const format, ...)
{
	int x;
	char *string, form;
	
	va_list vl;

	va_start(vl, format);

	while (format != NULL && format[x] != '\0')
	{
		form = format[x];
		switch(form)
		{
			case 'c':
				printf("%c", va_arg(vl, int));
					break;
			case 'i':
				printf("%d", va_arg(vl, int));
					break;
			case 'f':
				printf("%f", va_arg(vl, double));
					break;
			case 's':
				string = va_arg(vl, char *);
				if (string == NULL)
					printf("(nil");
				printf("%s", string);
				break;
			default:
				break;
		}
		if (format[x + 1] != '\0' && (form  == 'c' || form == 'i' || form == 'f' || form == 's'))
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(vl);
}
