#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: integer 1
 * @b: integer
 * Return: 0 when successful
*/
void swap_int(int *a, int *b)
	/*the code of the function starts here*/
(
	int temp = *a;

	*a = *b;
	*b = temp;
}
