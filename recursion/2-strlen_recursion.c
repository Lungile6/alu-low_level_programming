#include "main.h"

/**
 * _strlen_recursion - Find length recursively
 * @s: string pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
