#include <stdio.h>
#include "main.h"
/**
* print_last_digit - prints last digit of a number
* @x: number
* Return: returns last digit of number
*/
int print_last_digit(int x)
{
	x = (x % 10);
	if (x >= 0)
	{
		_putchar('0' + x);
		return (x);
	}
	else if (x < 0)
	{
		x = (x * -1);
		_putchar('0' + x);
		return (x);
	}
	return (0);
	}
