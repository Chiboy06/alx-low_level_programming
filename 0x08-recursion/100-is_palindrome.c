#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns if string is palindrome or not
 *
 * @s: string to test
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return is_palindrome(s, start + 1, end - 1);
	}

	return (0);
}

int is_palindrome(char *s)
{
	int length = strlen(s);

	return is_palindrome_recursive(s, 0, length - 1);
}
