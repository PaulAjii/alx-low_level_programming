#include "main.h"

char *_strcat(char *dest, char *src)
{
	int len, z;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (z = 0; src[z] != '\0'; z++, len++)
	{
		dest[len] = src[z];
	}
	dest[len] = '\0';

	return (dest);
}
