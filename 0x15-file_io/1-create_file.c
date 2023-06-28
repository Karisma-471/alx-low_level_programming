#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>


/**
  * create_file - A function that creates a file
  * @filename: the name of the file to be created
  * @text_content: The content of the file
  *
  * Return: 1 on success and -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
