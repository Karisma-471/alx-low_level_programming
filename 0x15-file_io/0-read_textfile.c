#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - A function that reads a text file
  * and prints it to the POSIX standard output
  * @filename: The name of the text file to be read
  * @letters: The number of letters to be read and print
  *
  * Return: the number of letters read or 0 if it fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t r;
	ssize_t w;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);

	return (w);
}
