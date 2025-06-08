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
 * puts_half - prints half of a string, followed by a new line.
 * function should print the second half of the string
 * the number of characters is odd, the function should
 * print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: pointer to string
 *
 * Return: string
 */
void puts_half(char *str)
{
	int index = 0;
	int len = (_strlen(str));
	int n_odd = ((_strlen(str) - 1) / 2);
	int n_even = ((_strlen(str) / 2));

	while (index < len)
	{
		if (len % 2 == 0)
		{
			if (index >= n_even)
			{
				_putchar(str[index]);
			}
		}
		else
		{
			if (index > n_odd)
			{
				_putchar(str[index]);
			}
		}

		index++;
	}

	_putchar('\n');
}
