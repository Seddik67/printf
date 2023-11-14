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
		{"%S", print_s},
	};

	va_list args;
	int i = 0;
	int j;
	int length = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 2;
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
