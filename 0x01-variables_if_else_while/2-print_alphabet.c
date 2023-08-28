#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch != 'z' + 1)
		{
		putchar(ch);
		ch++;
		}
	return (0);
}
