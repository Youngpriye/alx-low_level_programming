#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: 0 success
 */

void print_alphabet(void)

{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
