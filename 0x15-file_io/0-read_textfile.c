#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read a textfile and print it
 * @filename: filename to read
 * @letters: number of the letters
 * Return: the actual number of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);

	write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);

	return (bytes_read);
}
