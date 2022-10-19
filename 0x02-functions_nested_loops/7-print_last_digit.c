#include "main.h"

/**
 * print_last_digit - print the last digit of value
 * @n: Real Number
 * Return: last digit of the value
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');

	return (ld);
}
