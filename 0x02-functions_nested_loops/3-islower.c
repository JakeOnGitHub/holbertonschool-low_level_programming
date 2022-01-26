#include <stdio.h>
#include "main.h"
/**
*
* _islower - checks for lowercase letters
*
* Return: returns 1 if lowercase.  ohterwise, returns 0
*/
int _islower(int c)
{
	if (c == 'a' && c <= 'z')
	{
		putchar('1');
	}
	else 
	{
		putchar('0');
	}
	return (0);
}
