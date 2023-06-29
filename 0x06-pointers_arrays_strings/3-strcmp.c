#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1:- the forst string pointer
 * @s2:- the second string pointer
 *
 * Return: number that shows correlation
 */

int _strcmp(char *s1, char *s2)
{
	int compare, counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;

	compare = s1[counter] - s2[counter];

	return (compare);
}
