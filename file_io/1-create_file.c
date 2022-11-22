#include "main.h"
#include <string.h>

/**
 *  create_file - create file
 * @filename: pointer of char
 * @text_content: pointer of char
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (fd == -1 || !filename)
			return (-1);

		if (text_content == NULL)
			(text_content = "");


		write(fd, text_content, strlen(text_content));
		close(fd);

		return (1);
}
