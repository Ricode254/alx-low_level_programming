#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
	/* the code of the function starts here*/
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; ++i)
	/*starting the parent for loop*/
	{
		for (j = 0; j <= 9; ++j)
		/*starting the seconf for loop inside the parent for loop*/
		{
			result = i * j;
		if (j == 0)
		/*starting the if statement*/
		{
			_putchar('0');
		}
		else if (result < 10)
		/* else if to check whther result is less than 10*/
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else
		{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		if (j != 9) /*checking whther j is not 9*/
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
