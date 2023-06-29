#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:- represents the [ointer to the destination string
 * @src:- represents the pointer to the source string
 * @n:- the fraction of strings from src
 *
 * Return: pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, z;

	len = 0;

	while (dest[len] != '\0')
		len++;

	for (z = 0; z < n && src[z] != '\0'; z++, len++)
		dest[len] = src[z];

	dest[len] = '\0';

	return (dest);
}
