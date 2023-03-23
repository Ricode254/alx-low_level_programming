#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
	/* the code of the function starts here*/
	/* it uses the nested for loop*/
{
	int hour;
	int minute;
	/*starting the nested for loop*/
	for (hour = 0; hour < 24; ++hour)
	{
		for (minute = 0; minute < 60; ++minute)
		{
			/*displaying hours*/
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			/*displaying minutes*/
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}
