#include "main.h"

/**
 * main - print_alphabet- prints should be lower case
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
