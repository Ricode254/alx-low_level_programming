#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	char c;
	/**
	* Print lowercas letter 'a' to 'z'
	*/
	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	/**
	*Print Uppercase letter 'A' to 'Z'
	*/
	for (c ='A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	/**
	*Print new line character
	*/
		putchar('\n');
	
	return (0);
}
