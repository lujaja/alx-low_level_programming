#include "main.h"
/**
 * append_text_to_file - Function
 *
 * @filename: pointer to file name
 * @text_content: string to add at the end of the line
 * Return: 1 success, -1 failure
 *
 * Description: functio that appends text at the end of a file
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, wri;

	if (!filename)
		return (-1);

	if ((fd = open(filename, O_WRONLY | O_APPEND)) == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	else
	{
		for (i = 0; text_content[i]; i++);
		if ((wri = write(fd, text_content, i)) == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
