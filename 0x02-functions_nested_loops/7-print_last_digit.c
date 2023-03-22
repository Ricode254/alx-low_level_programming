#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
	/* the code of the function begins here*/
{
	int last_digit;
	/* checking the absolute value of n to handle a negtaive input*/
	n = abs(n);
	/* computing the last digit of the number*/
	last_digit = n % 10;
	/*printing the last digit*/
	_putchar(last_digit + '0');
	/*returning the value og the last digit*/
	return (last_digit);
	/* the code of the function ends here*/
}
