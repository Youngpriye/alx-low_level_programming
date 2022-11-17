#include "function_pointers.h"

/**
 * array_iterator - executes a function a function
 * @array: array to interate through
 * @size: size of the array.
 * @action: pointer to the function.
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
