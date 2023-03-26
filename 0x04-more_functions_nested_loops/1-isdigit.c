#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
	/*the code of the function goes here*/
{
	if (c >= '0' && c <= '9')
	/* giving the condition */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
