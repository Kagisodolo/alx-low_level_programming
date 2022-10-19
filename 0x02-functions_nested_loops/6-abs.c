#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: the input to be operated on.
 * Return: the absolute value of the input.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
