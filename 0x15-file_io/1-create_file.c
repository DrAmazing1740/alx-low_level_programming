#include "main.h"

/**
 * create_file - Creates the file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to a string.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return (-1);

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        ssize_t len = 0;
        while (text_content[len])
            len++;

        ssize_t bytes_written = write(fd, text_content, len);
        if (bytes_written != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);

    return (1);
}


