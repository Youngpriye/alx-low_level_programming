#include "main"
#include <unisted.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * /

int _putchar(char c)

{

	return (write (1, &c, 1));

}


0.  #include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * /

int main(void)

{

	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');

