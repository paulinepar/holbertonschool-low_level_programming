#include "main.h"
#include <string.h>

/**
 *  append_text_to_file - add text at the end
 * @filename: pointer of char
 * @text_content: pointer of char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd = 0, fd2 = 0, wr = 0, size = 1;
	char buffer[1024];

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while (size > 0)
	size = read(fd, buffer, 1024);
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = write(fd2, buffer, size);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fd == -1))
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	}
	if (close(fd2 == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	return (0);
}
