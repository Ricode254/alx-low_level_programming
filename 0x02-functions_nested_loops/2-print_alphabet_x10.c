#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet_x10 - This is a function that prints 10 times the alphabet
 * and followed by a new line
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char c;
	int i;
	/* The programmer uses the for while loop to write the code of the functio*/
	for (i = 0; i <= 10; ++i)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}
	_putchar('\n');
	}
}
