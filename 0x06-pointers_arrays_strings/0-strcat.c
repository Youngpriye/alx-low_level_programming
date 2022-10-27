#include "main.h"

/**
 * _strcat - concantenates two string
 * @dest: string that will be modifies
 * @src: string that will be concantinated
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';

	return (dest);
}
