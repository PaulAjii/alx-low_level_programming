#include "main.h"

/**
 * puts_half - prints the second half if a string
 * @str:- the pointer to the string to be printed
 */

void puts_half(char *str)
{
	int length, half;

	for (length = 0; str[length] != '\0'; length++)
		;

	half = length / 2;
	if (length % 2 == 1)
		half++;
	while (half < length)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
