#include "main.h"

/**
* _puts - function created
* @str: string passed into function
* Return: void
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
