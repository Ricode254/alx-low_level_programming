#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
		/**
		* innitializing variable c
		*/
	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
			/**
                	* check if character is q or e
                	*/
			putchar(c);
	}
	putchar('\n');

	return (0);
}
