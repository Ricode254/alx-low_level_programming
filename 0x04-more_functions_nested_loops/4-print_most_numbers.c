#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4
 */
void print_most_numbers(void)
	/*the code of the function goes here*/
{
	/*using the nested for if loop to write the code*/
	int i;

	for (i = 0; i <= 9; ++i)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
