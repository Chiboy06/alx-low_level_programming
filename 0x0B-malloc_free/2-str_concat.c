#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *concat_str;	
	/* Check if either string is NULL. */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Get the lengths of the two strings. */
	len1 = strlen(s1);
	len2 = strlen(s2);
	/* Allocate memory for the concatenated string. */
	concat_str = malloc(len1 + len2 + 1);
	if (concat_str == NULL)
		return NULL;
	/* Copy the two strings to the concatenated string. */
	memcpy(concat_str, s1, len1);
	memcpy(concat_str + len1, s2, len2);	
	/* Add a null terminator to the end of the concatenated string. */
	concat_str[len1 + len2] = '\0';
	return (concat_str);
}

