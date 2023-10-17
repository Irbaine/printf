#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string pointer
 * Return: the length of the string
*/

int _strlen(char *str)
{
	int i;

	for (i = 0 ; str[i] != 0; i++);
	return (i);
}
/**
 * _strlenC- Same as _strlen applied for constant char pointer s.
 * @str: char pointer
 * Return: the length of the const string
 */

int _strlenC(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++);
return (i);
}
