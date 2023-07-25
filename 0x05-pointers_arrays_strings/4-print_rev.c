#include "main.h"

/**
 * print_rev - funtn that prints string in reverse
 * @s: used string references pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
int begin = 0;

while (s[begin])
	begin++;
while (begin--)
_putchar(s[begin]);
_putchar('\n');
}
