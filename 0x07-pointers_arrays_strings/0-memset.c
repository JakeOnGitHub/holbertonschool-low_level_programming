#include "main.h"

/**
* _memset - function to put int in string
* @s: pointer
* @b: char being passed
* @n: unsigned int being passed
* Return: return s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
	{
		s[x] = b;
	}
		return (s);
}
