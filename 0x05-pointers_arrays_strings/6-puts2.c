#include "main.h"

/**
 * puts2 - chose one character and print
 * @str: input string
 * Return: Print reverse string
 */
void puts2(char *str)
{
	int x = 0;

	for (x = 0; str[x] != '\0' ; x++)
	{
		if ((x % 2) == 0)
			_putchar(*(str + x));
	}
	_putchar('\n');
}
