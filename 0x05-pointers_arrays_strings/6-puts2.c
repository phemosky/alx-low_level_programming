#include "main.h"

/**
* puts2 - print letters of string
* @str: the reference string
* Return: Always 0.
*/

void puts2(char *str)
{
int b = 0;

while (str[b] != '\0')
{
if (b % 2 == 0)
{
_putchar(str[b]);
}
b++;
}
_putchar('\n');
}
