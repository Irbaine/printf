#include "main.h"

/**
 * print_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int print_flags(const char *format, int *i)
{
	int j, a;
	int flags = 0;
  const int FLAGS_ARRAY[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	for (a = *i + 1; format[a] != '\0'; a++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[a] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARRAY[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = a - 1;

	return (flags);
}
