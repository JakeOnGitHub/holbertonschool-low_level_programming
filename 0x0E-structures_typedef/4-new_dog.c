#include "dog.h"

/**
* new_dog - entry point.  function to create new dog
* @name: dog name
* @age: dog age
* @owner: owner name
* Return: name of new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog != NULL)
	{
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
	}
	else
		return (NULL);
}
