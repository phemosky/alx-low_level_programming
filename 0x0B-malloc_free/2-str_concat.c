#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = cat = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[cat] != '\0')
		cat++;
	conct = malloc(sizeof(char) * (a + cat + 1));

	if (conct == NULL)
		return (NULL);
	a = cat = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[cat] != '\0')
	{
		conct[a] = s2[cat];
		a++, cat++;
	}
	conct[a] = '\0';
	return (conct);
}
