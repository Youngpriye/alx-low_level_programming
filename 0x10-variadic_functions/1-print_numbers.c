#include "variadic_functions.h"

/**
 * print_numbers - this function will print number.
 * @separator: string to be printed between number
 * @n: number of integers passed to the function.
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
