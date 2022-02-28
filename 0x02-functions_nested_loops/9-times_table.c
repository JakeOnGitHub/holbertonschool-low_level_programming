#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table
* void: value passed through
* Return: returns the values to the console
*/
void times_table(void)
{
	int length;
	int height;
	int result;

	for (length = 0; length <= 9; length++)
	{
		putchar('0');
		for (height = 1; height <= 9; height++)
		{
			result = length * height;
			putchar(',');
			putchar(' ');
			if (result <= 9)
			{
				putchar(' ');
			}
			else
			{
				putchar((result / 10) + '0');
			}
			putchar((result % 10) + '0');
			}
		putchar('\n');
	}
}
