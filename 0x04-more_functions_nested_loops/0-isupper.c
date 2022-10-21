#include "main.h"

/**
 * _isupper - To test for uppercase character
 * @c: Variable text
 * Return: 1 to be returned as uppercase for c and 0 for others
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
