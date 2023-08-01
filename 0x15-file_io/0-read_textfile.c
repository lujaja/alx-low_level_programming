#include "main.h"
#include <stdio.h>
/**
 * read_textfile - Function
 *
 * @filename: file name
 * @letters: Number of letters it should read
 * Return: actual number of letters it could read and print
 * or 0 if file name is NULL or file is unreadable
 *
 * Description: Function that reads a text file and prints it to the
 * POSIX standard output
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t re, wri;
	char *buffer;

	if (!filename)
		return (0);

	if ((fd = open(filename, O_RDONLY)) == -1)
			return (0);
	
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	re = read(fd, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, re);

	close(fd);
	free(buffer);
	return (wri);
}
