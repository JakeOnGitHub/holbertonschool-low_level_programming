#include "main.h"

/**
* main - entry point
* @argc: counts command line arguments
* @argv: array of strings that are command line arguments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
