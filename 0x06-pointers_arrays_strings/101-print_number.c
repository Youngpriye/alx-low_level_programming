#include "main.h"

/**
 * print_number - prints number
 * @n: the number to process
 */
void print_number(int n)
{
	unsigned int y;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		y = -n;
		_putchar('-');
	}
	else
	{
		y = n;
	}
	if (y >= 10)
	{
		print_number(y / 10);
	}
	_putchar('0' + (y % 10));
}
