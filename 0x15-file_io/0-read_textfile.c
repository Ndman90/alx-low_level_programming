#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, length, wrotechars;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	length = read(file, buffer, letters);
	wrotechars = write(STDOUT_FILENO, buffer, length);

	if (file == -1 || length == -1 || wrotechars == -1 || wrotechars != length)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (wrotechars);
}
