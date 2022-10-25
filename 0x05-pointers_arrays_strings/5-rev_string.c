#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: input string to reverse
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int x = 0;
	int i;

	while (s[x] != '\0')
		x++;
	for (i = 0; i < x; i++)
	{
		x--;
		rv = s[i];
		s[i] = s[x];
		s[x] = rv;
	}
}
