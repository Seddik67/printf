#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
	convert p[] = {
		{"%%", print_37},
		{"%d", print_i},
		{"%i", print_d},
		{"%c", print_c},
		{"%s", print_s},
		{"%b", print_bin},
		{"%R", print_rot13},
		{"%r", print_revs},
		{"%p", print_pointer}
	};

	va_list args;
	int i = 0;
	int j;
	int length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 8;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
			}
			j--;
		}

		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
