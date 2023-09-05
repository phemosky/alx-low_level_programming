#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a Buffer.
 * @file: file buffer name storing chars.
 * Return: A Pointer to newly-allocated Buffer.
 */

char *create_buffer(char *file)
{
	char *bufer;

	bufer = malloc(sizeof(char) * 1024);

	if (bufer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: File descriptor to Close.
 */

void close_file(int fd)
{
	int s;

	s = close(fd);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies Contents of a File to Another File.
 * @argv: An Array of Pointers to the Arguments.
 * @argc: Number of Arguments Supplied to the Program.
 * Return: 0 on success.
 *
 * Description: If Argument Count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int fro, TO, r, w;
	char *bufer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_fro file_TO\n");
		exit(97);
	}

	bufer = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	r = read(fro, bufer, 1024);
	TO = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read fro file %s\n", argv[1]);
			free(bufer);
			exit(98);
		}

		w = write(TO, bufer, r);
		if (TO == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write TO %s\n", argv[2]);
			free(bufer);
			exit(99);
		}

		r = read(fro, bufer, 1024);
		TO = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bufer);
	close_file(fro);
	close_file(TO);

	return (0);
}

