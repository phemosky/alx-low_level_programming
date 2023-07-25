#include "main.h"

/**
* rev_string - funtn that reverses a string
* @s: pointer pointing to the string
* Return: Always 0.
*/

void rev_string(char *s)
{
int word, a, mid;
char temp;

for (word = 0; s[word] != '\0'; word++)
a = 0;
mid = word / 2;
while (mid--)
{
temp = s[word - a - 1];
s[word - a - 1] = s[a];
s[a] = temp;
a++;
}
}
