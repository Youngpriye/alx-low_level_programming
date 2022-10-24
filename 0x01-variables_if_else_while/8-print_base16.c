#include <stdio.h>
/**
 * main - Entry point for numbers
 * Description: To print numbers in base 16 on lower case
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 16 ; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar(87 + x);
		}
	}
	putchar('\n');
	return (0);
}
