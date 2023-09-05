#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: Nnull terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, str_len, writefile;

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* open file with O_APPEND */
	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);

	/* if text_content is NULL, write nothing to the file */
	if (text_content == NULL)
	{
		close(fildes);
		return (1);
	}

	/* calculate length of text_content */
	for (str_len = 0; text_content[str_len]; str_len++)
		;

	/* write text_content to the file */
	writefile = write(fildes, text_content, str_len);
	if (writefile == -1)
	{
		close(fildes);
		return (-1);
	}

	/* close file and return 1 on success */
	close(fildes);
	return (1);
}
