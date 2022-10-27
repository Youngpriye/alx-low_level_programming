#include "main.h"

/**
 * print_number - prints number
 * @n: the number to process
 */
void print_number(int n)
{
	unsigned int y1;

	y1 = n;

	if (n < 0)
	{
		_putchar('-');
		y1 = -n;
	}
	if (y1 / 10 != 0)
	{
		print_number(y1 / 10);
	}
	_putchar((y1 % 10) + '0');
}
