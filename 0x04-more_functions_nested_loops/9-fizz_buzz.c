#include <stdio.h>
/**
 * main - to be able to print fizzbuzz
 * Return: 0
 */

int main(void)
{
	int x;

	printf("1");
	for (x = 2; x <= 100; x++)
	{
		printf(" ");
		if (x % 3 == 0)
			printf("fizz");
		if (x % 5 == 0)
			printf("Buzz");
		if (x % 3 != 0 && x % 5 != 0)
			printf("%d", x);
	}
	printf("\n");
	return (0);
}
