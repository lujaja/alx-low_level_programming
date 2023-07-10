#include "main.h"
/**
 * Author Lujaja luvuga
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 * 
 * Description: where filename is the name of the file to create
 *  and text_content is a NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure (file can not be
 *  created, file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------. If
 *  the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wri; 
	unsigned int f_len;

	if (filename == NULL)
		return (-1);
	fd = open("filename", O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (f_len = 0; text_content[f_len]; f_len++);
	wri = write(fd, text_content, f_len);
	if (wri == -1)
		write(fd, "fails", 5);
	close(fd);
	return (1);	
}