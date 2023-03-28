#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * Return: 0 when successful
 */
int _strlen(char *s)
	/* the coode of the function starts here*/
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

