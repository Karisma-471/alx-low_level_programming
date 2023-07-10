#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - A function that reads a text file and prints
* it to the POSIX standard output
* @filename: The text file to be read
* @letters: The number of letters to be read and printed
*
* Return: The number of letters read or 0 if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d;
	ssize_t r;
	ssize_t w;
	char *buffer;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}

	r = read(file_d, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(file_d);

	return (w);
}
