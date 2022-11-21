#include "main.h"

/**
 *  read_textfile - read and print
 * @filename: pointer of char
 * @letters: lenght
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *ptr;
	int size;

	ptr = malloc(sizeof(char) * letters);
		if (ptr == NULL)
			return (0);

		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
			exit(1);
		}

	size = read(fd, ptr, letters);

	close(fd);
	return (write(1, ptr, size));
}
