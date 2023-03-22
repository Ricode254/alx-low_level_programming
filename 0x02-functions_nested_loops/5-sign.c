#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero
 */
int print_sign(int n)
	/* the code of this funtio using the else if statement*/
{
	if (n > 0) /*checks whether n is greater than 0*/
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
		/*checks whether n is negative*/
	{
		_putchar('-');
		return (-1);
	}
	else
		/* this line checks whther n is 0*/
	{
		_putchar('0');
		return (0);
	}
}
