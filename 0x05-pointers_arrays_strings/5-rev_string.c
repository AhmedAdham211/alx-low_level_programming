#include "main.h"
#include <string.h>
/**
* rev_string - a function that reverse a string
* followed by a new line
* @s: an input string
* Return: Nothing
*/
void rev_string(char *s)
{
size_t i;

for (i = 0; i < strlen(s) / 2; i++)
{
char temp;

temp = s[i];
s[i] = s[strlen(s) - i - 1];
s[strlen(s) - i - 1] = temp;
}
}
