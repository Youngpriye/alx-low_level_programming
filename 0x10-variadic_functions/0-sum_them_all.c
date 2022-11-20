#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the arguments.
 * @n: number of aguments.
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (x = 0; x < n; x++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
