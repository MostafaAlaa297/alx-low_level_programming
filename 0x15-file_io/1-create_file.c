#include "main.h"

/**
 * create_file - creates a file with specified permissions and content
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		continue;

	bytes_written = write(fd, text_content, len);
	close(fd);

	return (bytes_written == len ? 1 : -1);
}
