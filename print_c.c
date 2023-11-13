#include "main.h"

/**
 * print_c - function to print a charcter
 * @val: argument
 *
 * Return: 1
 */

int print_c(va_list val)
{
	char cc;

	cc = va_arg(val, int);
	_putchar(cc);

	return (1);
}
