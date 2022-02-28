#include "main.h"

/**
* _strcpy - function to copy a string
* @dest: destination of copied string
* @src: string to be copied
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
