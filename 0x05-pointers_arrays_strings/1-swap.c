#include <stdio.h>

/**
 * swap_int - swap the value of two integer
 * @a: the first integer to be swapped
 * @b: the seconde integer to be swapped
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
