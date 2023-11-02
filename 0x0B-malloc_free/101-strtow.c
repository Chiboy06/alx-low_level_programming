#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char **strtow(char *str)
{
	void *word;
	char **words, *p;
	size_t num_words = 0;
	size_t i;

	/* Check if str is NULL or empty. */
	if (str == NULL || *str == '\0'){
		return NULL;
	}

	/* Count the number of words in the string. */
	p = str;
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			num_words++;
		}
		p++;
	}
	
	/* Allocate memory for the array of words. */
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return NULL;
	
	/* Split the string into words and store them in the array. */
	i = 0;
	word = (char *)strtok(str, " ");
	while (word != NULL)
	{
		words[i++] = (char *)word;
		word = (char *)strtok(NULL, " ");
	}
	
	/* Add a null terminator to the end of the array. */
	words[i] = NULL;
	
	return words;
}

