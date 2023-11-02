#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	size_t total_len, offset, len;
	char *new_str;
	int i;	
	/* Check if ac is 0 or av is NULL. */
	if (ac == 0 || av == NULL)
		return NULL;
	/* Calculate the total length of the new string. */
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
		/* +1 for the newline character*/
	}
	/* Allocate memory for the new string. */
	new_str = malloc(total_len + 1);
	if (new_str == NULL)
		return NULL;
	/* Copy the arguments to the new string, separated by newline characters. */
	offset = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		memcpy(new_str + offset, av[i], len);
		offset += len;
		new_str[offset++] = '\n';
	}
	/* Add a null terminator to the end of the new string. */
	new_str[offset] = '\0';
	return new_str;
}
