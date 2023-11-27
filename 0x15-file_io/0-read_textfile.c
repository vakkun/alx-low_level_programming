#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text and print it.
 * @filename: name of file.
 * @letters: number of char to read
 *
 * Return: If the function fails or NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t z, a, m;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	z = open(filename, O_RDONLY);
	a = read(z, buffer, letters);
	m = write(STDOUT_FILENO, buffer, a);

	if (z == -1 || a == -1 || m == -1 || m != a)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(z);

	return (m);
}
