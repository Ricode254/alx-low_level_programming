#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
	/* the code of the function starts here*/
{
	if (c >= 'A' && c <= 'Z')
	/* giving the condition to select uppercase*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
