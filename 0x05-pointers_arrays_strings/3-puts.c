#include "main.h"

/**
 * _puts - to print strings
 * @str: the value of string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
