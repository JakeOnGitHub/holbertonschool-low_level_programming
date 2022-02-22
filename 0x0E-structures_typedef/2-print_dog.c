#include "dog.h"

/**
* print_dog - entry point for the function
* @d: pointer to dog
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d == NULL)
		{
			d->name = "(nil)";
		}
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
			printf("Owner: %s\n", d->owner);
	}
	else
		return;
}
