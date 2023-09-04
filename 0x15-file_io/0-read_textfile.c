#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 *@letters: number of letter it should read and print.
 *@filename: name of the file to read
 * Return: letters it could read and print,
 * 0 if cant be open, read or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *buf;
	ssize_t readfile, writefile;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
		return (0);

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		free(buf);
		return (0);
	}

	readfile = read(fildes, buf, letters);
	if (readfile == -1)
	{
		free(buf);
		close(fildes);
		return (0);
	}

	writefile = write(STDOUT_FILENO, buf, readfile);
	if (writefile == -1)
	{
		free(buf);
		close(fildes);
		return (0);
	}

	free(buf);
	close(fildes);
	return (writefile);
}


