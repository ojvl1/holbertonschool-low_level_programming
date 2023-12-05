#include "main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fp;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	while (text_content[i] != '\0')
	{
		i++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	write(fp, text_content, i);
	}
	return (1);
}
