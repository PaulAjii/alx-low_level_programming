#include "main.h"
/**
 * _strncpy - the function that copies a string
 * @dest:- the string destination pointer
 * @src:- the string source pointer
 * @n:- the counter for the string byte
 *
 * Return: the destination string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[z] = src[z];
	for (; z < n; z++)
		dest[z] = '\0';

	return (dest);
}
