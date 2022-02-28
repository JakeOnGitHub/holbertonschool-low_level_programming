#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
*
* Return: describes value of the return
*/
void print_alphabet_x10(void)
{
int x = 1, y;
	for (; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
		putchar(y);
		}
		putchar('\n');
}
}
