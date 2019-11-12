#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - check the code for Holberton School students.
 * @filename: name of my file
 * @text_content: number of the letters that i used
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int ID = 0, wr = 0, count;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
		{}
	}
	ID = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (ID == -1)
	{
		return (-1);
	}
	wr = write(ID, text_content, count);
	if (wr == -1)
	{
		return (-1);
	}
	close(ID);
	return (1);
}
