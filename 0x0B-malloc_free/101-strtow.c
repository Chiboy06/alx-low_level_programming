#include "main.h"
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
  /* Check if str is NULL or empty. */
  if (str == NULL || *str == '\0')
    return NULL;

  /* Count the number of words in the string. */
  size_t num_words = 0;
  for (char *p = str; *p != '\0'; p++)
  {
    if (*p == ' ')
    {
      num_words++;
    }
  }

  /* Allocate memory for the array of words. */
  char **words = malloc(sizeof(char *) * (num_words + 1));
  if (words == NULL)
    return NULL;

  /* Split the string into words and store them in the array. */
  size_t i = 0;
  char *word = strtok(str, " ");
  while (word != NULL)
  {
    words[i++] = word;
    word = strtok(NULL, " ");
  }

  /* Add a null terminator to the end of the array. */
  words[i] = NULL;

  return words;
}

