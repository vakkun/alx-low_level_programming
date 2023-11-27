#include "main.h"

/**
 * create_file - Create file.
 * @filename: pointer to name of the file created.
 * @text_content: pointer of  string writed to the file.
 *
 * Return: fails - -1. true  - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int z, m, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	z = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(z, text_content, len);

	if (z == -1 || m == -1)
		return (-1);

	close(z);

	return (1);
}
