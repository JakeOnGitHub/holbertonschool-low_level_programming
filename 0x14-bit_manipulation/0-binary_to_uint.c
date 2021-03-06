#include "main.h"
#include "_pow_recursion.c"

/**
* binary_to_uint - converts a binary to an unsigned int
* @b: binary number to convert
* Return: converted number, or 0 if b isn't binary or NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int x;

	if (b == NULL)
	{
		return (0);
	}
		for (x = 0; b[x] != '\0'; x++)
		{
			if (b[x] == '0' || b[x] == '1')
			{
				num <<= 1;
				num += b[x] - '0';
			}
				else
				{
					return (0);
				}
		}
	return (num);
}
