#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, copying the first n bytes of the second string.
 *
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes to copy from the second string.
 *
 * Return: a pointer to a newly allocated string containing the concatenated strings, or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    size_t s1_len = 0;
    size_t s2_len = 0;
    char *new_str;

    /* Check if s1 or s2 is NULL. */
    if (s1 == NULL || s2 == NULL) {
        return NULL;
    }

    /* Calculate the lengths of s1 and s2. */
    while (s1[s1_len]) {
        s1_len++;
    }

    while (s2[s2_len]) {
        s2_len++;
    }

    /* Allocate memory for the new string. */
    new_str = malloc(s1_len + n + 1);
    if (new_str == NULL) {
        return NULL;
    }

    /* Copy s1 to the new string. */
    memcpy(new_str, s1, s1_len);

    /* Copy the first n bytes of s2 to the new string. */
    memcpy(new_str + s1_len, s2, n);

    /* Add a null terminator to the new string. */
    new_str[s1_len + n] = '\0';

    return new_str;
}

