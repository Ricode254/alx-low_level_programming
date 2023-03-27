#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: the number of times the character _ should be printed
 * Return: Always 0.
 */
void print_line(int n)
	/*the code of the function starts here*/
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; ++i)
	{
		_putchar('_');
	}
	_putchar('\n');

}
