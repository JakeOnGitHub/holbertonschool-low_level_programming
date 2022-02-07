#include "holberton.h"

/**
* _strncat - function created to concatenate two strings
* *dest: destination array
* *src: source array
* *n: postion in the array
* Return: return dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int destLength;
	int x;

	for (destLength = 0; dest[destLength] != '\0'; destLength++)
	{}
	for (x = 0;  x < n && src[x] != '\0'; x++)
	{
		dest[destLength + x] = src[x];
	}
	dest[destLength + n] = '\0';
	return (dest);
}
