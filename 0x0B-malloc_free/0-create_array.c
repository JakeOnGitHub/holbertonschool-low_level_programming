#include "main.h"

/**
* create array - entry point
* @size:
* @c:
* Return: Null if size of 0, returns pointer to array or Null if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;
	ptr = malloc(size * sizeof(char));
	
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (x =0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
