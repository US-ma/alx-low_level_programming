#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Fucntion to read a text file
 * @filename: file to open
 * @letters: numbers of letters to read
 * Description: Function to read text file
 * Return: nmber of printed letter or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_open, f_read, f_write;
	char *stream;

	if (filename == NULL)
		return (0);
	stream = malloc(sizeof(char) * letters);

	if (stream == NULL)
		return (0);
	f_open = open(filename, O_RDONLY);

	if (f_open < 0)
	{
		free(stream);
		return (0);
	}

	f_read = read(f_open, stream, letters);

	if (f_read < 0)
	{
		free(stream);
		return (0);
	}

	f_write = write(STDOUT_FILENO, stream, f_read);

	free(stream);
	close(f_open);

	if (f_write < 0)
		return (0);
	return ((ssize_t) f_write);
}
