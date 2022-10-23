#include <stdio.h>
/**
 * main - Entry point for alphabets
 * Description: to print lower case alphabets in reverse direction
 * Return: 0 success
 */

int main(void)
{
	char letters;

	for (letters = 'z' ; letters >= 'a' ; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
