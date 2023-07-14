#include <stdio.h>
/**
*main - writing a C-program that prints sizes of various type on computer
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long int l;
long long int g;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int %lu bytes(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(g));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
