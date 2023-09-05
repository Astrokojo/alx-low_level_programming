#include "main.h"

/**
 * create_file - creates a file
 *@text_content: null terminated string,
 *to write file to
 *@filename: name of the file to create,
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, str_len, writefile;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fildes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fildes);
		return (1);
	}

	for (str_len = 0; text_content[str_len]; str_len++)
		;


	writefile = write(fildes, text_content, str_len);
	if (writefile == -1)
	{
		close(fildes);
		return (-1);
	}

	close(fildes);
	return (1);
}


