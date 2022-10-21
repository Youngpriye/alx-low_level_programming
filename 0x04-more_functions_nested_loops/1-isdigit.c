#include "main.h"

/**
 * _isdigit - to test for char as a digit
 * @c: int to be checked
 * Return: for c to be digit return 1, then 0 for others
 */
int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1;

	return (x);
}
