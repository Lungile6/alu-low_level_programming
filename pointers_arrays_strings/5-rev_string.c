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
 * rev_string - reverses a string.
 * @s: pointer to string
 *
 * Return: string
 */
void rev_string(char *s)
{
	int index = 0;
	int rev = (_strlen(s) - 1);
	char temp;

	while (index < rev)
	{
		temp = s[index];
		s[index] = s[rev];
		s[rev] = temp;
		index++, rev--;
	}
}
