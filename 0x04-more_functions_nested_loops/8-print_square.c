#include "main.h"

/**
 * print_square -  a function that prints a square.
 * @size: integer input for square length.
 * Return: void.
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}
