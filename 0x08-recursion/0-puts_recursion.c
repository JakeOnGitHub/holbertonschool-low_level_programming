#include "main.h"

/**
* _puts_recursion - function to print a string
* @s: pointer being evaluated
* Return: void
*/

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
