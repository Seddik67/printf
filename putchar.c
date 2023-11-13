#include "main.h"

/**
 * _putchar -  print the charcter
 * @c: the charcter to print
 *
 * Return: on succes 1 , on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
