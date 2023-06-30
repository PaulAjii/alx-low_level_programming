#include "main.h"

/**
 * reverse_array - function that reverses array of integers
 * @a:- the array to be reversed
 * @n:- size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;

	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
