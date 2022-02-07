#include "holberton.h"

/**
* _strncpy - function to copy a string
* @dest: destination array
* @src: source array
* @n: position in array
* Return: return dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
		if (src[x] == '\0')
		{
			while (x < n)
			{
				dest[x] = '\0';
				x++;
			}
		}
	}
	return(dest);
}
