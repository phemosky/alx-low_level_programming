#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates string of n bytes to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int aa = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (aa < len1)
	{
		s[aa] = s1[aa];
		aa++;
	}

	while (n < len2 && aa < (len1 + n))
		s[aa++] = s2[b++];

	while (n >= len2 && aa < (len1 + len2))
		s[aa++] = s2[b++];

	s[aa] = '\0';

	return (s);
}
