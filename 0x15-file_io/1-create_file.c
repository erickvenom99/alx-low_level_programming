#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with the specified filename and writes the
 *               provided text content to the file.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure, or 1 if
 */

int create_file(const char *filename, char *text_content)
{
	int res;
	int fd;
	int len = 0;
	int flags = O_CREAT | O_WRONLY | O_TRUNC;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, flags, mode);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;
	res = write(fd, text_content,  len);

	if (res == -1 || res != len)
		{
			close(fd);
			return (-1);
		}

		close(fd);
		return (1);
}
