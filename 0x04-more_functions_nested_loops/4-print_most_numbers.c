#include "main.h"

/**
 * print_most_numbers - check for digits (0 through 9) .
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int u;

for (u = 48; u < 58; u++)
{
if (u != 50)
{
if (u != 52)
{
_putchar(u);
}
}
}
_putchar('\n');
}
