#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - A function that appends text at the end of a file
* @text_content: the text to be appended
* @filename: pointer to the constant character string
*
* Return: 1 on success or -1 if it fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
		{
			lent++;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	w = write(o, text_content, lent);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);

	return (1);
}	
