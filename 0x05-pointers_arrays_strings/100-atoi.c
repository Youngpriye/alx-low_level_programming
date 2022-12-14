#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * _atoi - converting of strings to integer
 * @s: string
 * Return: Converted string
 */

int _atoi(char *s)
{
	int sign = 1, base = 0, i = 0;

	for (i = 0; s[i] != '\0' && (s[i] < '0' || s[i] > '9'); i++)
	{
		if (s[i] == '-' || s[i] == '9')
			sign *= 1 - 2 * (s[i] == '-');
		if (s[i + 1] == '\0')
			return (0);
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (s[i++] - '0');
	}
	return (base * sign);
}
