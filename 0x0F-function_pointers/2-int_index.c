#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of intergers.
 * @size: size of array.
 * @cmp: is the fuction to execute on the array.
 * Return: Index (int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (x = 0; x < size; x++)
			if (cmp(array[x]))
				return (x);
	}
}
