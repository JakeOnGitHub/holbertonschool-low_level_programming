#include "main.h"

/**
* _calloc - entry point.  allocates memory of array
* @nmemb: number of elements
* @size: bytes in the element
* Return: points to the memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	for (x = 0; x < nmemb * size; x++)
	{
		ptr[x] = 0;
	}
	return (ptr);
}
