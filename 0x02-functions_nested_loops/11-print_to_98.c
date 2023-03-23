#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
	/* the code of the function starts here*/
	/* the programmer uses the nested loop*/
{
	int i;

	if (n <= 98)
	{
	for (i = n; i < 98; ++i)
	{
		printf("%d ", i);
	}
	}
	else
	{
	for (i = n; i > 98; --i)
	{
		printf("%d ", i);
	}
	}
	printf("\n");
}
