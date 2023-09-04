#include "main.h"
#include <stdlib.h>

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
	length = read(o, buffer, letters);
	wrotechars = write(STDOUT_FILENO, buffer, length);

	if (file == -1 || length == -1 || wrotechars == -1 || wrotechars != length)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (length);
}
