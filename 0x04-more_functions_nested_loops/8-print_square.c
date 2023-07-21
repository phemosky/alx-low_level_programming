#include "main.h"

/**
 * print_square - print a square
 *
 * @size: size of square
*Description: use _putchar to print. # to print square
 */

void print_square(int size)
{
int m, n;

n = 0;

if (size < 1)
_putchar('\n');

while (n < size)
{
m = 0;
while (m < size)
{
_putchar('#');
m++;
}
_putchar('\n');
n++;
}
}
