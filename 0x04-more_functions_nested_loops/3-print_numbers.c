#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: 0 when succesful
 */
void print_numbers(void)
	/*the code of the function starts here*/
{
	/*using the for statement*/
	int i;

	for (i = 0; i < 10; ++i)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
