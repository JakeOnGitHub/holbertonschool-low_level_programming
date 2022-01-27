#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints all #'s from the given # to the # 98.  in order.
* n: starting number given to start the count from
* Return: the output to the console
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%i, ", n--);
		}
			printf("%i\n", n);
		}
	else
	{
		while (n < 98)
		{
			printf("%i, ", n++);
		}
			printf("%i\n", n);
		}
}
