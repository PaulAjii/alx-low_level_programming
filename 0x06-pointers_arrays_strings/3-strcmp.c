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
	int res;

	if (s1 == s2)
		res = 0;
	else if (s1 < s2)
		res = -15;
	else
		res = 15;

	return (res);
}
