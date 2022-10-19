#include "main.ha"

/**
 * _islower - This will check if the character is a lowercase
 * @c: this is the character
 * Return: when letter is 1 return as lowercase, 0 if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
