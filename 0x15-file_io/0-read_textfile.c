#include "main.h"

/**
* read_textfile - reads text file & prints to POSIX STDOUT
* @letters: number of letters it should read and print
* @filename: filename to open
* Return: number of letters read/print. 0 if fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length, printedChars;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	length = read(fd, buffer, letters);

	printedChars = write(STDOUT_FILENO, buffer, length);


	if (length == -1 || printedChars == -1)
		return (0);

	free(buffer);
	close(fd);
	return (printedChars);
}
