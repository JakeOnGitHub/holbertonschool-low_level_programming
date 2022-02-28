#include "holberton.h"

/**
* leet - function to change characters in a string to numbers
* @x: string passed to be changed
* Return: always 0
*/

char *leet(char *x)
{
	int string;
	int altChar;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (string = 0; x[string] != '\0'; string++)
	{
		for (altChar = 0; altChar < 10; altChar++)
		{
			if (x[string] == letters[altChar])
			{
				x[string] = numbers[altChar];
			}
		}
	}
	return (x);
}
