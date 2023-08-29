#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp1 = needle, *temp2 = haystack;

	while (*haystack)
	{
		temp2 = haystack;
		needle = temp1;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = temp2 + 1;
	}
	return (NULL);
}
