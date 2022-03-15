#include "main.h"

/**
* read_textfile - reads text file & prints to POSIX STDOUT
* @letters: number of letters it should read and print
* @filename: filename to open
* Return: number of letters read/print. 0 if fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
		if (lenr != lenw)
			return (0);
		return (lenw);
}
