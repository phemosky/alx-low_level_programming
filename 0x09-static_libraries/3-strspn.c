#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int u = 0;
int v;

while (*s)
{
for (v = 0; accept[v]; v++)
{
if (*s == accept[v])
{
u++;
break;
}
else if (accept[v + 1] == '\0')
return (u);
}
s++;
}
return (u);
}
