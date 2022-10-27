#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: string to be copied to
 * @src: copy from
 * @n: number of char to copy
 * Return: Pointer to @des
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	for ( ; y < n ; y++)
		dest[y] = '\0';

	return (dest);
}
