#include "main.h"

/**
 * _strlen - function to print length of string
 * @s: parameter for a string
 *
 * Return: string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}

/**
 * _strlenc - find length of the string for constant char
 * @s: parameter for string
 *
 * Return: string
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
