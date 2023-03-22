#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * __isalpha(int c) - This is a function that
 * checks for alphabetic characters
 * @c: single letter input
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	/* wrting the code of the function using the if else statement and piping*/
	if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
