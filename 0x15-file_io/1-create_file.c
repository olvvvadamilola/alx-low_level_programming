#include "main.h"
/**
 * create_file - creates or overwrites a file with a given name and content
 * @filename: name of the file created or overwritten
 * @text_content: content of the file
 * Return: 1 on success or -1 if error
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file, written;
	size_t content_length;

	if (filename == NULL)
	{
		return (-1);
	}


	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		written = write(file, text_content, content_length);

		if (written != (ssize_t)content_length)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
