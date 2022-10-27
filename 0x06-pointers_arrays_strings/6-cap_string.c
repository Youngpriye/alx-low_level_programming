#include "main.h"

/**
 * cap_string - it capitalizes words of a string
 * @s: string to be processed
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int x, i;

	x = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (x == 1 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			x = 0;
		}
		i++;
	}
	return (s);
}
