#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
	/* debugging the function to print the largest number*/
{
	int largest;

		/* giving the condition for a to be greater than b and c*/
	if (a > b && a > c)
	{
		largest = a;
	}
		/*giving the condition for b to be greater than both a and c*/
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
