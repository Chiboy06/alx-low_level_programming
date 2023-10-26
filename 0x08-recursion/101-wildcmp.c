#include "main.h"

/* Recursive function to compare two strings with wildcards. */
bool wildcmp_recursive(char *s1, char *s2, int s1_index, int s2_index)
{
    if (s1[s1_index] == '\0' && s2[s2_index] == '\0')
    {
        return true; /* Both strings are empty, and we've successfully matched them. */
    }

    if (s2[s2_index] == '*')
    {
        while (s2[s2_index + 1] == '*')
        {
            s2_index++; /* Skip consecutive '*' characters in s2. */
        }

        while (s1[s1_index] != '\0')
        {
            if (wildcmp_recursive(s1, s2, s1_index, s2_index + 1))
            {
                return true; /* Matched using '*' as an empty string. */
            }
            s1_index++;
        }

        return wildcmp_recursive(s1, s2, s1_index, s2_index + 1); /* Matched using '*' as one or more characters. */
    }

    if (s1[s1_index] == s2[s2_index] || (s1[s1_index] != '\0' && s2[s2_index] == '?'))
    {
        return wildcmp_recursive(s1, s2, s1_index + 1, s2_index + 1); /* Matched, continue comparing. */
    }

    return false; /* Characters don't match, not identical. */
}

/* Compare two strings with wildcard characters. */
int wildcmp(char *s1, char *s2)
{
    return wildcmp_recursive(s1, s2, 0, 0) ? 1 : 0;
}
