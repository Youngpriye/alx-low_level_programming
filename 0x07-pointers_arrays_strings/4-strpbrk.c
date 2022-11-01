#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the string of characters to search for
 * Return: pointer to to byte s that matches one of the byes in accept, or NUL
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;

	while (*s)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
