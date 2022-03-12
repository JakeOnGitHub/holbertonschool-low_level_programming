#include "main.h"
#include "_pow_recursion.c"

/**
* binary_to_uint - converts a binary to an unsigned int
* @b: binary number to convert
* Return: converted number, or 0 if b isn't binary or NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i = 0, j;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)/*loop through the array*/
	{
	if (((b[j]) != '0') && ((b[j]) != '1') && ((b[j]) != '\0'))/*check if binary*/
		return (0);
	}
	j = j - 1;/*move backwards from null byte*/
	while (b[i] != '\0')
	{
		if (b[j - i] == '1')
		{
			if (i == 0)
				decimal = decimal + 1;
			else
				decimal = decimal + _pow_recursion(2, i);
		}
			i++;
	}
	return (decimal);
}
