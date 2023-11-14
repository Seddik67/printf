#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - conversion for printf
 * @ph: pointer for specifier
 * @function: function for the specifier
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int print_c(va_list val);
int print_37(void);
int _putchar(char c);
int print_s(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int _printf(const char *format, ...);

#endif
