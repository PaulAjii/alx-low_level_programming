#include "main.h"

/**
 * string_toupper - function that changes all lowercases to uppercases
 * @x:- pointer to string
 * Return: pointer to the uppercase string
 */

char *string_toupper(char *x)
{
	int len = 0;

	while (x[len] != '\0')
	{
		if (x[len] >= 97 && x[len] <= 122)
			x[len] -= 32;
		len++;
	}

	return (x);
}
