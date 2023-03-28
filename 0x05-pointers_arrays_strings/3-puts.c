#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: str
 * Return: 0
 */
void _puts(char *str)
	/*the function of the code starts here*/
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
