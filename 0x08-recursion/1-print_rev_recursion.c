#include "main.h"

/**
* _print_rev_recursion - function to print sting in reverse
* @s: pointer being examined
* Return: void
*/

void _print_rev_recursion(char *s)
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
