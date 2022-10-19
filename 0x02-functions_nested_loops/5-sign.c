#include "main.h"
/**
 * print_sign - This will print the sign of a number
 * @n: the number of the sign to be printed
 * Return: If the number is greater than zero then return 1
 * The 0 of number is zero
 * If the number is less than zero then its -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
