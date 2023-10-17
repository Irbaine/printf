#include "main.h"
#include <stdlib.h>
/**
 * print_hex_extra - converts a long int to a hexadecimal representation
 * @val: The value to be converted
 * Return: The number of characters printed
 */
int print_hex_extra(unsigned long int val)
{
	long int i, counter = 0;
	long int *array;
	unsigned long int tem = val;
	
	while (val / 16 != 0)
	{
		val = val / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(long int) * counter);
	if (array == NULL)
		return (-1);
	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for(i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		{
		  array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	else
	{
		_putchar(array[i] + '0');
		}
	}
	free(array);
	return (counter);
}
