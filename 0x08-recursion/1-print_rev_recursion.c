#include "main.h"

/**
* _print_rev_recursion - function to print sting in reverse
* @s: pointer being examined
* Return: void
*/

void _print_rev_recursion(char *s)
{
	int str;

	if (str == '\0')
	{
	}
		_putchar(*s);
		_print_rev_recursion(--s);
}
