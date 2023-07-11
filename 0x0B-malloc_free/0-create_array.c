#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of characters,
 * and initializes it with a specific character
 * @size:- size of the array to be created
 * @c:- character to initia;ize the array c
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a = 0;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(sizeof(char) * size);

	if (s == NULL)
		return (0);

	while (a < size)
	{
		*(s + a) = c;
		a++;
	}

	*(s + a) = '\0';

	return (s);
}
