#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str) {
	if (str == NULL) {
		return NULL;
	}

	size_t leng = strlen(str);
	char *copy = malloc(leng + 1);
	if (copy == NULL) {
		return NULL;
	}

	memcpy(copy, str, leng + 1);
	return copy;
}
