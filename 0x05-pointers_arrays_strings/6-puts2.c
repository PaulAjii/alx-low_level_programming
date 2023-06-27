#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str:- the pointer to the string to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
