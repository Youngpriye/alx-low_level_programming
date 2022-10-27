#include "main.h"

/**
 * _strncat - concantenates two string
 * @dest: string that will be modifies
 * @src: string that will be concantinated
 * @n: number of char to be copied
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';

	return (dest);
}
