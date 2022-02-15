#include "main.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: array that contains argument strings
* Return: if error, 1 - otherwise always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
