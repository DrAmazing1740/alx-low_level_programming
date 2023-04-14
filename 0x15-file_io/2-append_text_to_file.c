#include "main.h"
/**
 * append_text_to_file - Append text at the tail of the file.
 * @filename: Point to the name of the file.
 * @text_content: String to add to the tail of a file.
 *
 * Return: Function failure or filename is NULL - -1.
 *         If the file is nonexistent the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wrote = write(fd, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
