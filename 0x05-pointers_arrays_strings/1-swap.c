#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: swap and stores address of b
* @b: swap and stores address of a
* Return: 0
*/

void swap_int(int *a, int *b)
{
int swap;

swap = *b;
*b = *a;
*a = swap;
}
