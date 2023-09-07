#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Buffer is allocated 1024 bytes
 * @file: Name of the file Buffer is storing Chars in
 * Return: A Pointer for the newly-allocated Buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes File Descriptors
 * @fd: File Descriptor to close
 */

void close_file(int fd)
{
	int z;

	z = close(fd);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copies all Contents of a File into another File.
 * @argv: Arrays of Pointers for the Arguments.
 * @argc: Numbers of Arguments Supplied into the Program.
 *
 * Return: 0 on success.
 *
 * Description: If the Argument count is Incorrect - exit code 97.
 * If file_from does not Exist or can not be Read - exit code 98.
 * If file_to can not be Created or Written to - exit code 99.
 * If file_to or file_from Cannot be Closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, U, V;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	U = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || U == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		V = write(to, buffer, U);
		if (to == -1 || V == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		U = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (U > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
