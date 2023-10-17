#include "main.h"
#include <stdlib.h>
/**
 * print_oct - converts an unsigned integer to octal and prints it
 * @val: parameter
 * Return: number of characters printed
*/

int print_oct(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int value = va_arg(val, unsigned int);
	unsigned int temp = value;

	while (value / 8 != 0)
	{
		value = value / 8;
		counter++;
	}
	counter++;
	array = (int *)malloc(sizeof(int) * counter);
	if (array == NULL)
		return (-1);

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}

	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');

	free(array);
	return (counter);
}
