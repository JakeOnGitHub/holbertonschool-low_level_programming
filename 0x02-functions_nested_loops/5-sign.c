#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* print_sign - checks the value of numbers
* @n: determines what return will be
* Return: returns 1+ if positive, returns 00 if 0 and returns 0 if otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
