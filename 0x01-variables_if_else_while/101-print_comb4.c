#include <stdio.h>
/**
 * main - Entry point for integers
 * Return: always 0
 */

int main(void)
{
	int x;
	int i;
	int h;

	for (h = 0 ; h != 8 ; h++)
	{
		for (x = h + 1 ; x != 9 ; x++)
		{
			i = x + 1;
			do {
				putchar('0' + h);
				putchar('0' + x);
				putchar('0' + x);
				if (h != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (i != 10);
		}
	}
	putchar('\n');
	return (0);
}
