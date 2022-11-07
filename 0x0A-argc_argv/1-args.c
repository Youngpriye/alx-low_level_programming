#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: count
 * @argv: an array of a command listed
 * Return: INT count of arguments.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
