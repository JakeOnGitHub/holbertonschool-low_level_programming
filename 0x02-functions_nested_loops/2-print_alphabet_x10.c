#include <stdio.h>
#include "main.h"
/**
* main - entry point
*
* Return: describes value of the return
*/
int main(void)
{
int x = 1, y;
	for (x; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
		putchar(y);
		}
		putchar('\n');
}
	return (0);
}
