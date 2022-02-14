#include <stdio.h>
#include "main.h"
/**
* _abs - computes the absolute value of an integer
* @x: interger value passed
* Return: value passed after completion
*/
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
	return (0);
}
