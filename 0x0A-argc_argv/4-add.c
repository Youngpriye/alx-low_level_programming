#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function to print its name
 * @argc: count arguments passed in argv
 * @argv: String that holds the passed Arguments.
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num, x, y, z;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		num = atoi(argv[z]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
