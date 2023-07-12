#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s:- string to be capitalized
 *
 * Return: pointer to the capitalized string
 */

char *cap_string(char *s)
{
	char a[10][2] = {',', '.', ' ', '!', ';', '{', '}', '?', '(', ')'};
	int x, n, i = 0;

	n = (sizeof(a) / sizeof(char)) - 1;

	for (x = 0; x <= n; x++)
	{
		if (s[i] == a[x])
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] -  32;
		}
	}

	return (s);
}
