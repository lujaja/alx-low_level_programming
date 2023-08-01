#include "main.h"
/**
 * create_file - Function
 *
 * @filename: pointer to name of the file to create
 * @text_content: NULL termianted text to write to the file
 * Return: 1 on success, -1 on failure
 *
 * Description: create a function that creates a file
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0, wri;

	if (!filename)
		return (-1);

	if ((fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR)) == -1)
		return (-1);

	if (!text_content)
	{
		text_content = "";
	}
	else
	{
		for (i = 0; text_content[i]; i++);
	}

	if ((wri = write(fd, text_content, i)) == -1)
		return (-1);
	close(fd);

	return (1);
}
