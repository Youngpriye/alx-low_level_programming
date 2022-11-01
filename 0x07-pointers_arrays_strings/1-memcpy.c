#include "main.h"

/**
 * _memcpy - Memory to copy
 * @dest: the destination memory
 * @src: source memory
 * @n: number of bytes to copy over.
 * Return: string copied from source.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
