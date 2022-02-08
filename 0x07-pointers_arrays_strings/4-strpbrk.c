#include "main.h"

/**
* _strpbrk - fuction to search string for any set of bytes
* @s: given string
* @accept: new string
* Return: new string
*/

char *_strpbrk(char *s, char *accept)
{
	int x;

	do {
		for (x = 0; s[x] != '\0'; x++)
		{
			if (accept[x] == *s)
			{
				return (s);
			}
		}
	s++;
	} while (*s != '\0');
	return (0);
}
