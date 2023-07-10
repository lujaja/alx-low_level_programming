#include "main.h"
/**
 * Author Lujaja Luvuga
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: string to append
 * Return: 1 on success -1 on failure
 * 
 * Description: Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 *  Return 1 if the file exists and -1 if the file does not
 *  exist or if you do not have the required permissions to
 *  write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wri; 
	unsigned int l_file;

	if (filename == NULL)
		return (-1);
	fd = open("filename", O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (l_file = 0; text_content[l_file]; l_file++);
		wri = write(fd, text_content, l_file);
		if (wri == -1)
			return (wri);
		return (1);
	}
	close(fd);
	return (1);
}