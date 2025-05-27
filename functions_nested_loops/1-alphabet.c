#include "main.h"

/**
 * print_alphabet - The main point of the program
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    char character;

    for (character = 'a'; character <= 'z'; character++)
    {
        _putchar(character);
    }
    _putchar('\n');
}