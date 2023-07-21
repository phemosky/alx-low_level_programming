#include "main.h"

/**
 * print_triangle - prints a triangle using #.
 *
 * @size: The size of triangle.
 */

void print_triangle(int size)
{
int length, width;

if (size > 0)
{
for (length = 1; length <= size; length++)
{
for (width = size - length; width > 0; width--)
{
_putchar(' ');
}
for (width = 0; width < length; width++)
{
_putchar('#');
}
if (length == size)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
