#include "main.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: argument strings in an array
* Return: If an error, 1. Otherwise always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int x;
	int y;
	(void) argv;

	if (argc > 2)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
				printf("Error\n");
				return (1);
				}
			}

			sum += atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
