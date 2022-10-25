#include "main.h"

/**
 * print_rev - Print a reverse string
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int x;

	while (*(s + x) != '\0')
	{
		x++;
	}
	while (x--)
	{
		_putchar(*(s + (x)));
	}
	_putchar('\n');
}
