#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first < 8; first++)
	{
		for (second = first + 1; second < 9; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar(first + '0'); /* Print first digit */
				putchar(second + '0'); /* Print second digit */
				putchar(third + '0'); /* Print third digit */

				if (first != 7 || second != 8 || third != 9)
				{
					putchar(','); /* Print comma */
					putchar(' '); /* Print space */
				}
			}
		}
	}

	putchar('\n'); /* Print new line */

	return (0);
}
