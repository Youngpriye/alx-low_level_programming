#include "main.h"

/**
 * is_prime_number - fuction the check if a number is a prime
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * _prime_number - fuction the check if a number is a prime
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (prime_number(n, i - 1));
	return (0);
}
