#include <stdio.h>
/**
 * main - Entry point for integer in bese 10
 * Description: To print single digit in base 10 using putchar only
 * Return: 0 always
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
