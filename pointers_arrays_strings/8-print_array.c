#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * @a: array of integers
 * @n: number of elements of the array to be printed
 *
 * Return: string
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[n - 1]);
		}
	}

	printf("\n");
}
