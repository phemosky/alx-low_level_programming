#include "main.h"

/**
 *_memcpy - functn that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int b = 0;
int c = n;

for (; b < c; b++)
{
dest[b] = src[b];
n--;
}
return (dest);
}
