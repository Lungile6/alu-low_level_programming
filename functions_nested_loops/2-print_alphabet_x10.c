#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times
 * 
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
    char character;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (character = 'a'; character <= 'z'; character++)
        {
            _putchar(character);
        }
        _putchar('\n');
    }
}