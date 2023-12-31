#include "main.h"

/**
 * print_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments .
 *
 * Return: Precision.
 */
int print_size(const char *format, int *i)
{
	int a = *i + 1;
	int size = 0;

	if (format[a] == 'l')
		size = LONG;
	else if (format[a] == 'h')
		size = SHORT;

	if (size == 0)
		*i = a - 1;
	else
		*i = a;

	return (size);
}
