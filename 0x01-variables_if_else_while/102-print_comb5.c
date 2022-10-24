#include <stdio.h>
/**
 * main - entry point for integers
 * Return: 0 success
 */

int main(void)
{
	int x, o;

	for (x = 0; x < 100; x++)
	{
		for (o = x + 1; o < 100; o++)
		{
			putchar ((x / 10) + '0');
			putchar ((x % 10) + '0');
			putchar (' ');
			putchar ((o / 10) + '0');
			putchar ((o % 10) + '0');

			if (x == 98 && o == 99)
				continue;

			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
