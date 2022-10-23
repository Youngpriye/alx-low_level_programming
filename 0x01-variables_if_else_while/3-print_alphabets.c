#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 sucess
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';

	for (c = 'a'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
