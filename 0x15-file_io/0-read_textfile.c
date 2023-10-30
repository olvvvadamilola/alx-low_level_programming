#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: number of letters to read
 * Return: number of bytes read or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}

	bytes_read = read(file_d, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_d);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		close(file_d);
		free(buffer);
		return (0);
	}
	return (bytes_written);
}
