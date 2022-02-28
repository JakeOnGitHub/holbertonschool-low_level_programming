#include "main.h"

/**
* print_rev - function that will print a string in reverse
* @s: value of string passed to function
* Return: void
*/

void print_rev(char *s)
{
	int length;
	int str;

		for (length = 0; s[length] != '\0'; length++)
		{
			continue;
		}
		for (str = length - 1; str >= 0; str--)
		{
			_putchar(s[str]);
		}
	_putchar('\n');
}
