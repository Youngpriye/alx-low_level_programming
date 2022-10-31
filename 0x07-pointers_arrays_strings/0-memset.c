#include "main.h"

/**
 * _memset - a memory set function
 * @s: string
 * @b: character
 * @n: integer
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
