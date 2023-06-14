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
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, file);

	fclose(file);
	return (1);
}
