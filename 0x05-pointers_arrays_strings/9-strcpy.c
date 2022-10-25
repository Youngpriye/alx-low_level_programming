#include "main.h"

/**
 * _strcpy - copies the string pointed to src
 * @dest: destination of the copier.
 * @src: source of copy
 * Return: a copy of the src.
 */
char *_strcpy(char *dest, char *src)
{
	int less = 0;

	while (*src != '\0')
	{
		dest[less] = *src;
		less++;
		src++;
	}
	return (dest);
}
