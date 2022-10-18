#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Enter Variable
 *
 * Description: Determine the last digit of n
 * Return: 0 when successful
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("last %d is %d and is less than 6 and not 0\n" n, m);
	}
	else
	{
		printf("Lat digit of %d is %d and is 0\n", n m);
	}
	return (0);
}
