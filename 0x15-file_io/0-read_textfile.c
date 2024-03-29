#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of the file to read
 * @letters: number of letters it should read and write
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_read, num_write;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	num_read = read(fd, buffer, letters);
	num_write = write(STDOUT_FILENO, buffer, num_read);

	close(fd);
	free(buffer);
	return (num_write);
}
