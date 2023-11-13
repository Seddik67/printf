#include "main.h"

/**
 * print_s - function to print a string
 * @val: argument
 *
 * Return: the length of the string
 */

int print_s(va_list val)
{
	char *s;
	int i, length;

	s = va_arg(val, char *);

	if (s == NULL)
	{
		s = "(nil)";
		length = _strlen(s);

		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
	else
	{
		length = _strlen(s);

		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
}
