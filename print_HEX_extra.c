#include "main.h"
#include <stdlib.h>
/**
*print_HEX_extra - converts an unsigned integer to hexadecimal and prints it
*@val: value to be converted
*Return:The number of characters printed
*/
int print_HEX_extra(unsigned int val)
{
	int i, counter = 0;
	int *array;
	unsigned int tem = val;
	while (val / 16 != 0)
	{
		val = val / 16;
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
	for(i = counter - 1; i >= 0; i++)
		{
		if (array[i] > 9)
		  array[i] = array[i] + 7;
		_putchar(array[i] + '0');
		
}		
	free(array);
	return counter;
}
