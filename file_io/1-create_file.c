#include "main.h"

/**
 *  create_file - create file
 * @filename: pointer of char
 * @text_content: pointer of char
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fd2;

		fd = open(filename, O_CREAT | O_TRUNC | O_RDONLY, 0600);
		if (fd == -1)
		{
			return (-1);
			exit(1);
		}
		fd2 = open(text_content, O_APPEND);
		if (fd2 == -1)

		fd2 = dup(fd);


		close(fd);
		close(fd2);

		return (1);
}
