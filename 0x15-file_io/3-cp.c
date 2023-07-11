#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_buffer - A program that copies the content of a file to another
  * @file: where the content to be copied will be stored
  *
  * Return: Pointer to the newly allocated buffer
  */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
  * close_file - Closes file descriptor
  * @fd: The file descriptor which will be closed
  */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  * read_file - reads the content from a file into a buffer
  * @file: the file to read from
  * @buffer: the buffer to store the content that was read
  *
  * Return: the number of bytes read
  */
ssize_t read_file(char *file, char *buffer)
{
	int from;
	ssize_t r;

	from = open(file, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		free(buffer);
		exit(98);
	}

	r = read(from, buffer, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		free(buffer);
		close_file(from);
		exit(98);
	}

	close_file(from);
	return (r);
}

/**
  * write_file - writes content from a buffer into a file
  * @file: the file to write into
  * @buffer: the buffer containing the content
  * @size: the size of the buffer
  */
void write_file(char *file, char *buffer, ssize_t size)
{
	int to;
	ssize_t w;

	to = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		free(buffer);
		exit(99);
	}

	w = write(to, buffer, size);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		free(buffer);
		close_file(to);
		exit(99);
	}

	close_file(to);
}

/**
  * main - copies the content of a file to another
  * @argv: an array of pointers argument
  * @argc: the number of arguments supplied
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	char *buffer;
	ssize_t r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	r = read_file(argv[1], buffer);
	write_file(argv[2], buffer, r);

	free(buffer);

	return (0);
}
