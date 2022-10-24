#include "main.h"

/**
 * _strlen - return the length of the string as an int value
 * @s: string length
 * Return: length
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
