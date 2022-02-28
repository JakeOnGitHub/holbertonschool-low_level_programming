#include "main.h"

/**
* is_prime_number - function used to find prime number
* @n: number being evaluated
* Return: is number prime?
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (_prime_calc(2, n));
}


/**
* _prime_calc - function used to calculate prime numbers
* @x: evaluated number
* @num: evaluated number
* Return: is number prime?
*/

int _prime_calc(int x, int num)
{
	if (num % x == 0)
	{
		return (0);
	}
	if (x == num / 2)
	{
		return (1);
	}
	return (_prime_calc(x + 1, num));
}
