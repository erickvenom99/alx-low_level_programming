#include "main.h"
/**
 * open_files - Opens source and destination files .
 * @file_from_name: The name of the source file.
 * @file_to_name: The name of the destination file.
 * @file_from: efile descriptor of the source file.
 * @file_to:  the file descriptor of the destination file.
 */
void open_files(char *file_from_name, char *file_to_name, int *file_from,
		int *file_to)
{
	int flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode_t mode = 0664;
	struct stat st;

	*file_from = open(file_from_name, O_RDONLY);
	if (*file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		file_from_name);
		exit(98);
	}
	if (stat(file_to_name, &st) == 0 && !(st.st_mode & S_IRUSR))
	dprintf(STDERR_FILENO,
		"Error:Destination file  %s dosen't have read permissions\n",
		file_to_name
		);

	*file_to = open(file_to_name, flags, mode);
	if (*file_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n",
			file_to_name
			);
		close(*file_from);
		exit(99);
	}
	chmod(file_to_name, mode);
}
#include "main.h"
/**
 * copy_content - Copies source file to the destination file.
 * @file_from: The file descriptor of the source file.
 * @file_to: The file descriptor of the destination file.
 */
void copy_content(int file_from, int file_to)
{
	ssize_t byte_write, byte_read;
	char buffer[BUFFER_SIZE];

	while ((byte_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		byte_write = write(file_to, buffer, byte_read);
		if (byte_write != byte_read)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file descriptor %d\n",
				file_to
				);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (byte_read == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file descriptor %d\n",
			file_from
			);
		exit(98);
	}
}
#include "main.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: Array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(argv[1], argv[2], &file_from, &file_to);

	copy_content(file_from, file_to);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
