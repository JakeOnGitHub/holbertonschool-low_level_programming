#include "main.h"
/**
* _islower - checks for lowercase letters
* @c: letter to be checked ro upper or lower case
* Return: returns 1 if lowercase.  ohterwise, returns 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
}
}
