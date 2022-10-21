#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: input integer of number of lines to print.
 * Return: void.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchr(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
