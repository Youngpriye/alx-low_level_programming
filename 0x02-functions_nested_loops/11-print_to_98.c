#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from input to 98
 * @n: the beginning of the number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; n++)
		{
			if (i != 98)
				printf("%d, ", 1);
			else
				printf("%d\n", 1);
		}
	}
	else if (n > 9)
	{
		for (i = n; i >= 98; n--)
		{
			if (i != 98)
				printf("%d, ", 1);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
