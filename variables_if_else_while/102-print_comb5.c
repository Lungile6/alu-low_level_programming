#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 100; first++)
	{
		for (second = first + 1; second < 100; second++)
		{
			putchar((first / 10) + '0'); /* Print first digit of first number */
			putchar((first % 10) + '0'); /* Print second digit of first number */
			putchar(' '); /* Print space */
			putchar((second / 10) + '0'); /* Print first digit of second number */
			putchar((second % 10) + '0'); /* Print second digit of second number */

			if (first != 98 || second != 99) /* Check if not the last combination */
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}

	putchar('\n'); /* Print new line */

	return (0);
}
