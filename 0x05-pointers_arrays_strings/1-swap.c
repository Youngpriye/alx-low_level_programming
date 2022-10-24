#include "main.h"

/**
 * swap_int - swaps values between two integers
 * @a: fist integer to be swaped
 * @b: second integer to be swaped
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
