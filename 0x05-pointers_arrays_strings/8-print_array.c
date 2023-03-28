#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	{
	return;
	}
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
	printf(", %d", a[i]);
	}

	printf("\n");
}

