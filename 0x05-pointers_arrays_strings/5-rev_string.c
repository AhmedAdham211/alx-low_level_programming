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
int i;

for (i = 0; i < _strlen(s) / 2; i++)
{
char temp;

temp = s[i];
s[i] = s[_strlen(s) - i - 1];
s[_strlen(s) - i - 1] = temp;
}
}
