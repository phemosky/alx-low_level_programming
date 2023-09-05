#include "main.h"

/**
 * create_file - Creates File.
 * @text_content: A pointer to String to Write to File.
 * @filename: A pointer to Name of File to Created
 * Return: If the function fails - -1. Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ff, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	ff = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(ff, text_content, length);

	if (ff == -1 || w == -1)
		return (-1);

	close(ff);

	return (1);
}
