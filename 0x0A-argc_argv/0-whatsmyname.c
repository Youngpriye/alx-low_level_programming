#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: size of argv
 * @argv: an array of a command listed
 * Return: Alway 0 (sucess)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
