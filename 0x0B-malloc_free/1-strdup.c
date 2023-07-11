#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - duplicates a string given as a parameter
 * @str:- the string to be duplicated
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int a = 0, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	while ((dup[a] = str[a]) != '\0')
		a++;

	return (copy);
}
