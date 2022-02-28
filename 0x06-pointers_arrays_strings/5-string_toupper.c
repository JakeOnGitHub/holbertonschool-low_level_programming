#include "holberton.h"

/**
* string_toupper - function to convert strings to upper case
* @x: string passed to the function
* Return: the new string
*/

char *string_toupper(char *x)
{
	int string;

	for (string = 0; x[string] != '\0';)
	{
		if (x[string] >= 'a' && x[string] <= 'z')
		{
			x[string] = x[string] - 32;
		}
		string++;
	}
	return (x);
}
