#include <stdio.h>

/**
 * main - Character size should be printed
 * Description: To print the various size of a computer
 * Return: Always 0
 */

int main(void)

{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
