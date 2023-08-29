#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * description : printing _putchar using putchar prototype
 * Return: On success 0.
 */
int main(void)
{
char str[] = "_putchar";
int i;

for (i = 0; i < 8; i++)
	_putchar(str[i]);
_putchar('\n');
return (0);
}
