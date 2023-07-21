#include "stdio.h"

/**
 * main - function to print 1-100, multiples of three,
*	Fizz is printed instead of number, multiples of five,
 *	Buzz, for multiples of both three and five, FizzBuzz.
 * Return: Always 0.
 */

int main(void)
{
int digits;

for (digits = 1; digits <= 100; digits++)
{
if ((digits % 3) == 0 && (digits % 5) == 0)
printf("FizzBuzz");

else if ((digits % 3) == 0)
printf("Fizz");

else if ((digits % 5) == 0)
printf("Buzz");

else
printf("%d", digits);

if (digits == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
