#include "holberton.h"

/**
* cap_string - funtion to capitalize
* @x: comparing variable
* Return: new sting
*/

char *cap_string(char *x)
{
	int string;

	for (string = 0; x[string] != '\0'; string++)
	{
		if (x[string] >= 'a' && x[string] <= 'z')
		{
			if (x[string - 1] == ' ' ||
					x[string - 1] == '\t' ||
					x[string - 1] == '\n' ||
					x[string - 1] == ',' ||
					x[string - 1] == ';' ||
					x[string - 1] == '.' ||
					x[string - 1] == '!' ||
					x[string - 1] == '?' ||
					x[string - 1] == '"' ||
					x[string - 1] == '(' ||
					x[string - 1] == ')' ||
					x[string - 1] == '{' ||
					x[string - 1] == '}' ||
					string == 0)
			{
				x[string] = x[string] - 32;
			}

		}
	}
	return (x);
}
