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
	while (ch++ <= 'z')
		{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
		}
	putchar('\n');
	return (0);
}
