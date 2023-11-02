#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av) {
	size_t len, offset;
	char *str, *s;
	int i = 0;
	/* Check if ac is 0 or av is NULL. */
	if (ac == 0 || av == NULL) {
		return NULL;
	}
	/* Calculate the total length of the new string. */
	len = 0;
	while (i < ac)
	{
		len += strlen(av[i]) + 1; 
		i++;
		/* +1 for the newline character */
	}
	/* Allocate memory for the new string. */
	str = malloc(len + 1);
	if (str == NULL)
	{
		return NULL;
	}
	/* Copy the arguments to the new string, separated by newline characters. */
	offset = 0;
	while (i < ac)
	{
		s = av[i];
		while (*s) {
			str[offset++] = *s;
			s++;
		}
		i++;
		str[offset++] = '\n';
	}
	/* Add a null terminator to the end of the new string. */
	str[offset] = '\0';
	return str;
}

