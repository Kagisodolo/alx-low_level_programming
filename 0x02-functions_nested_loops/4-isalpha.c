#include "main.h"

/**
 * _isalpha - function that returns verifies input is an alphabet.
 * @c: Input to be verified.
 * Return: 1 if alphabet. 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
