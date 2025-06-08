#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer to string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to string
 *
 * Return: string
 */
void puts2(char *str)
{
	int index = 0;
	int rev = (_strlen(str));

	while (index < rev)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}

	_putchar('\n');
}
