#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* _isalpha - checks for alpha characters
* @c: determines what return will be
* Return: returns 1 if a letter.  returns 0 if otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
