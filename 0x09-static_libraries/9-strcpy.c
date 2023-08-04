#include "main.h"

/**
* _strcpy - checks the string pointed to by src
* @dest: char type string
* @src: char type string
* Description: copy string pointed to by pointer 'src' to
* the buffer pointed to by 'dest'
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int n = -1;

do {
n++;
dest[n] = src[n];
} while (src[n] != '\0');
return (dest);
}
