#include "main.h"

/**
 * print_triangle - func that prints a triangle.
 * @size: input integer for triangle height.
 * Return: void.
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}

		_putchar('\n');
	}
}
