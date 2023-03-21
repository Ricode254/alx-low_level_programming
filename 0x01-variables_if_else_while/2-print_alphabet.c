#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
		/**
		*Print lowercase letters 'a' to 'z'
		*/
	for (c = 'a'; c <= 'z'; ++c)
		/**
		* assigning characters to variable c
		*/
	{
		putchar(c);
	}
		/**
		*Print a newline character
		*/
		putchar('\n');

		return (0);
}
