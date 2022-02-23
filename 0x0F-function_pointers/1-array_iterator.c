#include "function_pointers.h"

/**
* array_iterator - entry point. interates the array
* @array: array being evaluated
* @size: Size of array
* @action: pointer of function
*Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
