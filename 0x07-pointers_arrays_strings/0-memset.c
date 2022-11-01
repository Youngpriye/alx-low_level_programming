#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: an integer
 * @n: number of integer
 * @s: pointers to memory.
 * Return: return s
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
