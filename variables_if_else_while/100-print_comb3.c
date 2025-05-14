#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 10; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar(first + '0'); /* Print first digit */
			putchar(second + '0'); /* Print second digit */

			if (first != 8 || second != 9)
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}

	putchar('\n'); /* Print new line */

	return (0);
}
