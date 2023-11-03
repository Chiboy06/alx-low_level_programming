#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: the number of elements in the array.
 * @size: the size of each element in the array.
 *
 * Return: a pointer to the allocated memory, or NULL if the function fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	/* Check if nmemb or size is 0. */
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	/* Allocate memory for the array. */
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return NULL;
	}
	/* Set the memory to zero. */
	memset(p, 0, nmemb * size);
	return p;
}

