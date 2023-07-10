#include "main.h"
/**
 * Author Lujaja Luvuga
 * read_textfile - a function that rerads text fle and prints
 * it to the POSIX standard output
 * @filename: file to read from
 * @letters: Number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of
 *  bytes, return 0
 * 
 * Description: function that read text file and prints it to
 * posix standard output
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t re, wri;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = (char *) malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	re = read(fd, buf, letters);
	if (re == -1)
		return (re);
	wri = write(STDOUT_FILENO, buf, letters);
	
	close(fd);
	free(buf);
	return (wri);
}