#include "main.h"

/**
* flip_bits - returns number of bits you would need
* to flip to get from one to the other
* @n:first number
* @m: second number
* Return: number of bits needed to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count;

	x = n ^ m;

	count = 0;
	while (x > 0)
	{
		if ((x & 1) != 0)
		{
			count++;
			x = x >> 1;
		}
	}
	return (count);
}
