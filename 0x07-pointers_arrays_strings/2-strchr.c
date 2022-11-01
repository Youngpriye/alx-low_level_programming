#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			return ((s + x));
		x++;
	}
	if (c == '\0')
		return ((s + x));
	return (NULL);
}
