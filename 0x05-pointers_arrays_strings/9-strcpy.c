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

	while (*(src + less) != '\0')
	{
		*(dest + less) = *(src + less);
		less++;
	}
	*(dest + less) = '\0';
	return (dest);
}
