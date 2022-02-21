#include "main.h"

/**
* malloc_checked - allocates memory with malloc
* @b: amount of space allocated
* Return: 98 if malloc fails, otherwise 0
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return(ptr);
}
