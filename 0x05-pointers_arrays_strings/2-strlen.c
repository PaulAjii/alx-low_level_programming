#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to be checked
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len])
		str_len++;

	return (str_len);
}
