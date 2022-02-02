#include "main.h"

/**
* print_diagonal - function to print diagnol
* @n: number passed into the function
* Return: void
*/

void print_diagonal(int n)
{
	int x;
	int y;

	if (n >= 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
}
}
