#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: void always
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		char *s = "01234567891011121314";

		for (j = 0; j <= 14; j++)
			_putchar(s[j]);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}