#include "main.h"

/**
 * _isalpha - This checks for alphabets
 * @c: This is the character to be checked
 * Return: 1 if character is a letter, 0 for any other
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
