#include "main.h"

/**
 * puts_half - funtn that prints half a string
 * @str: ref string
 */

void puts_half(char *str)
{
int comp_string, mid_string;

comp_string = 0;
while (str[comp_string] != '\0')
	comp_string++;
mid_string = comp_string / 2;

if (comp_string % 2 == 1)
	mid_string++;
while (mid_string < comp_string)
{
_putchar(str[mid_string]);
mid_string++;
}
_putchar('\n');
}
