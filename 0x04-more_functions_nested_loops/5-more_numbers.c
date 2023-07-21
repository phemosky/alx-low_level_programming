#include "main.h"

/**
 * more_numbers - check10 times the number
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int a;

int g;

for (a = 0; a < 10; a++)
{
for (g = 0; g < 15; g++)
{
if (g >= 10)
_putchar(g / 10 + '0');
_putchar(g % 10 + '0');
}
_putchar('\n');
}
}
