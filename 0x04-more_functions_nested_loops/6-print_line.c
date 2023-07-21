#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: number of times (_) to be printed
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int h;

for (h = 1; h <= n; h++)
{
_putchar('_');
}
_putchar('\n');
}
}
