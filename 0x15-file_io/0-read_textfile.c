#include <stdio.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text = NULL;
	ssize_t file, let, w;
	
	/*Allocate memory for the text buffer*/
	text = malloc(letters);
	if (!text)
	{
		return 0;
	}
	
	/*Check if filename is NULL*/
	if (!filename)
	{
		free(text);
		return 0;
	}
	
	/* Open the file in read-only mode*/
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(text);
		return 0;
	}
	
	/* Read the file content into the buffer*/
	let = read(file, text, letters);
	if (let < 0)
	{
		close(file);
		free(text);
		return 0;
	}
	
	/* Write the read content to the standard output*/
	w = write(STDOUT_FILENO, text, let);
	if (w != let)
	{
		close(file);
		free(text);
		return 0;
	}
	
	/* Close the file and free the memory*/
	close(file);
	free(text);
	
	/* Return the actual number of letters written*/
	return w;
}
