#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: string printed between numbers.
 * @n: number of integers passed to the function.
 * @...: variable number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int list;

	va_start(nums, n);

	for (list = 0; list < n; list++)
	{
		printf("%d", va_arg(nums, int));

		if (list != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
