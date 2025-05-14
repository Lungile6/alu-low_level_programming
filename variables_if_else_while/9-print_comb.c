#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0'); /* Print the number */

		if (number < 9) /* Check if not the last number */
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
	}

	putchar('\n'); /* Print new line */

	return (0);
}
