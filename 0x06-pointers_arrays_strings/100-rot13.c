#include "main.h"
#include <stdio.h>

/**
 * rot13 - to encode a string
 * @s: string to encode
 * Return: A Pionter
 */
char *rot13(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		while (((s[x] >= 'a' && s[x] <= 'm') || (s[x] >= 'A' && s[x] <= 'M')))
		{
			s[x] += 13;
			x++;
		}
		if ((s[x] >=  'n' && s[x] <= 'z') || (s[x] >=  'N' && s[x] <= 'Z'))
			s[x] -= 13;
		x++;
	}
	return (s);
}
