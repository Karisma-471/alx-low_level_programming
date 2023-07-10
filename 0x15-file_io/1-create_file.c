#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
* create_file - A function that creates a file
* @filename: The file to be created
* @text_content: The content of the file
*
* Return: 1 on success or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_d, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	w = write(file_d, text_content, len);

	if (w == -1)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);

	return (1);
}
