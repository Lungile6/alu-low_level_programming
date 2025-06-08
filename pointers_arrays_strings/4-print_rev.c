#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string
 *
 * Return: string
 */
void print_rev(char *s)
{
	int len = 0;
	int j = 0;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	--s;

	for (j = len; j > 0; j--)
	{
		_putchar(*s);
		--s;
	}

	_putchar('\n');
}
