#include "main.h"

/**
 * set_string - Sets the value of a pointer to char
 * @s: source for copy
 * @to: string to copy to.
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
