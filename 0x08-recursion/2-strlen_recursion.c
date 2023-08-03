#include "main.h"

/**
 * _strlen_recursion - Returns length of string.
 * @s: string to be measured.
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int bay = 0;

	if (*s)
	{
		bay++;
		bay += _strlen_recursion(s + 1);
	}

	return (bay);
}
