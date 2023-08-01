#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/* MACRO */
#define BUFF_SIZE 1024
/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument string
 * Return: 0 succes,
 *
 * Description: a program that copies the content of file to another file
 *
 */
int main(int argc, char **argv)
{
	int fd_f, fd_t;
	int i = 0, j = 0, wri, re;
	struct stat st;
	off_t size;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s file_from file_to\n", argv[0]);
		exit (97);
	}

	if ((fd_f = open(argv[1], O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	if ((fd_t = open(argv[2], O_WRONLY | O_TRUNC, 0664)) ==  -1)
	{
		dprintf(STDERR_FILENO, "Error: openning %s\n", argv[2]);
		exit (-1);
	}

	stat (argv[1], &st);
	size = st.st_size;

	while ((re = read(fd_f, &buff[i], BUFF_SIZE)) != 0 && j <= size)
	{
		if ( i <= BUFF_SIZE || re == 0)
		{
			if ((wri = write(fd_t, &buff[0], i)) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit (99);
			}
		}
		j += i;
		i = 0;
	}

	return (size);
}

