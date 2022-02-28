#include "main.h"

/**
* print_array - function that prints array
* @a: pointer being evaluated
* @n: variable passed into function
* Return: void
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
