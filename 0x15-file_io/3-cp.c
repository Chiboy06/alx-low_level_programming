#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int text_from, text_to;
	int num1 = 1024, num2 = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp text_from text_to\n"), exit(97);
	}
	text_from = open(argv[1], O_RDONLY);
	if (text_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	text_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);
	if (text_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(text_from), exit(99);
	}
	while (num1 == 1024)
	{
		num1 = read(text_from, buf, 1024);
		if (num1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num2 = write(text_to, buf, num1);
		if (num2 < num1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(text_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", text_from), exit(100);

	if (close(text_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", text_to), exit(100);

	return (0);
}


