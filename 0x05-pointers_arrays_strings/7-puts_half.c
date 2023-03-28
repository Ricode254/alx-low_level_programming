#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int i, len = 0;

	/* Find the length of the string */
	while (str[len] != '\0')
	len++;
	/* If the length is odd, print the last n characters */
	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
	}
	else
	{
		i = len / 2;
	}
	/* Print the second half of the string */
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

