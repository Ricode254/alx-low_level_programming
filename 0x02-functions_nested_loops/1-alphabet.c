#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - This function prints the lowercase alphabet
 * it uses the _putchar function
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
	/*the code for the function*/
{
	char c = 'a';
	/* using the while loop*/
	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}
