#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *haystack_ptr = haystack;
	char *needle_ptr = needle;

	while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
	{
	haystack_ptr++;
	needle_ptr++;
	}
	if (*needle_ptr == '\0')
	{
	return (haystack);
	}
	haystack++;
	}
return (NULL);
}
