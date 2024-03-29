#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile-main fuction to read a text
 *
 * @filename:'String variable'
 * @letters:'Character variable repr text in the file'
 *
 * Return:Text string and count of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, printed, wrote;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	printed = read(fd, buff, letters);
	if (printed == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buff, printed);
	if (wrote == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buff);
	return (printed);
}
