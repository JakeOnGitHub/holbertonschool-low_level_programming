#include "main.h"

/**
* print_most_numbers - function we're creating
* Return: void
*/

void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
		{
			_putchar(number);
		}
	}
		_putchar('\n');
}
