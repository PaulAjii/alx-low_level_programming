#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str:- the pointer to the string to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length = length + 2)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
