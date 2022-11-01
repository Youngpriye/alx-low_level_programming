#include "main.h"

/**
 * _strspn - search a string for a set of bytes to calculate lenght
 * @s: string to search in.
 * @accept: accepted string
 * Return: the number (U_INT) of bytes matching accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, z = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				z++;
			}

			y++;
		}

		x++;
	}

	return (z);
}
