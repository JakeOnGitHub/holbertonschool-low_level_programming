#include "holberton.h"

/**
* reverse_array - function to print integers in reverse
* @a: position being checked
* @n: position being checked
* Return: void
*/

void reverse_array(int *a, int n)
{
	int string;
	int reverse;

	for (string = n - 1; string >= n / 2; string--)
	{
		reverse = a[string];
		a[string] = a[n - 1 - string];
		a[n - 1 - string] = reverse;
	}
}
