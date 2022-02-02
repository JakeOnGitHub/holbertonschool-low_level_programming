#include "main.h"

/**
* puts2 - function to print every other character of a line
* @str: pointer being evaluated
* Return: void
*/

void puts2(char *str)
{
	int length;
	int string;

	for (length = 0; str[length] != 0; length++)
	{
		continue;
	}
	for (string = 0; string <= length; string += 2)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
