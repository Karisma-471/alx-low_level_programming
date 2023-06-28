#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * append_text_to_file - A function that appends text at the end of a file
  * @text_content: teh string for the file
  * @filename: A pointer that points to the file
  *
  * Return: 1 on success -1 if it fails
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == 1)
		return (-1);

	close(o);

	return (1);
}
