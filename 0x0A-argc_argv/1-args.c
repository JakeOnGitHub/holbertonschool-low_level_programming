#include "main.h"

/**
* main - entry point
* @argc: number of arguments from command line
* @argv: array of strings that are the arguments on command line
* Return: always zero
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
