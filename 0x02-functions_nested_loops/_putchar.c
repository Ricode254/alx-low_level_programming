#include "main.h"
#include <unistd.h>
#include "abs.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
	/**
	*This is _putchar function
	*/
{
	return (write(1, &c, 1));
}
