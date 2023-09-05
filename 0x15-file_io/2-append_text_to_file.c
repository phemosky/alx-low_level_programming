#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @text_content: String to Add to the end of File.
 * @filename: A Pointer to name of File.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int c, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	c = open(filename, O_WRONLY | O_APPEND);
	w = write(c, text_content, length);

	if (c == -1 || w == -1)
		return (-1);

	close(c);

	return (1);
}
