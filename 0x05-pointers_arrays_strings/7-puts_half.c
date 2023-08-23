#include "main.h"
#include <string.h>
/**
* puts_half - a function that prints half of a string, followed by a new line.
* @str: An input string
* Return: Nothing
*/
void puts_half(char *str)
{
int length = strlen(str);

int start = length / 2;

if (length % 2 == 1)
{
start = (length - 1) / 2;
}
while (str[start] != '\0')
{
printf("%c", str[start]);
start++;
}
_putchar('\n');
}
