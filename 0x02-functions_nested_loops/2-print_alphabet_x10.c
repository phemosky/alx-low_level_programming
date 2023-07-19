#include "main.h"

/**
 * print_alphabet_x10 - prints 10times the alphabet in lowercase,
 * followed by a new line
 *
 */
void print_alphabet_x10(void)
{
	char ca;
	int i;

	i = 0;

	while (i < 10)
	{
		ca = 'a';
	while (ca <= 'z')
	{
		_putchar(ca);
		ca++;
	}
		_putchar('\n');
		i++;
	}
}
