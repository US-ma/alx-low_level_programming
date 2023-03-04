#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Function to create file
 * @filename: file
 * @text_content: A NULL terminated string
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f_open, f_write, len = 0;

	if (filename == NULL)
		return (-1);

	f_open = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f_open < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	f_write = write(f_open, text_content, len);
	close(f_open);
	if (f_write < 0)
		return (-1);
	return (1);
}
