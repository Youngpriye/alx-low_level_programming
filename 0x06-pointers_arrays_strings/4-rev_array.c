#include "main.h"

/**
 * reverse_array - reveres an array of integers
 * @a: the array to reverse
 * @n: number of element to revers
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int numb;
	int x;

	n--;
	for (x = 0;  x < n ; x++)
	{
		numb = a[x];
		a[x] = a[n];
		a[n] = numb;
		n--;
	}
}
