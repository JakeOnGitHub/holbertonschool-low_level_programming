#include "main.h"

/**
* square_root - function to find square root
* @x: value given
* @y: value given
* _sqrt_recursion - finding square root through recursion
* Return: is int square root?
*/

int square_root(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (square_root(x + 1, y));
	}
}

int _sqrt_recursion(int n)
{
	int i = 1;

	return (square_root(i, n));

}
