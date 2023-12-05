#include "main.h"
/**
 * read_textfile - function that reads text file and
 * prints it to the POSIX STDIO.
 * @filename: file name
 * @letters:Number of letters is should read and print
 * Return:actual number of letters it could read or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd;
	char *fp;

	fp = malloc(sizeof(char) * letters);

	if (fp == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
	return (0);
	}


	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		free(fp);
		return (0);
	}
	rd = read(i, fp, letters);

	fp[letters + 1] = '\0';

	 write(STDOUT_FILENO, fp, rd);

	close(op);

	return (rd);
}
