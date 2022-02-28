#include "function_pointers.h"

/**
* print_name - entry point.  prints the name
* @name: name of person
* @f: pointer function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
