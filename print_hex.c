#include "main.h"
#include <stdlib.h>
/**
 * print_hex - converts an unsigned integer to hexadecimal and prints it
 * @val: va_list containing the unsigned integer
 * Return: The number of characters printed
 */
int print_hex(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (-1);
	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
