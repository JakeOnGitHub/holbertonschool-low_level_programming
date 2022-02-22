#include "dog.h"

/**
* free_dog - entry point.  frees up memory
* @d: pointer given
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
