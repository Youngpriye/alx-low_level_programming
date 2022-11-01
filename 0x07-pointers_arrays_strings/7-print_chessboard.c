#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x, b;

	for (x = 0 ; x < 8 ; x++)
	{
		for (b = 0 ; b < 8 ; b++)
		{
			_putchar(*((*a + x * 8) + b));
		}
		_putchar('\n');
	}
}
