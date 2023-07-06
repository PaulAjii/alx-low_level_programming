#include "main.h"

/**
 * _pow_recursion - returns the value of a number raised to another number
 * @x:- tha base number
 * @y:- the exponent
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y-1));
}
