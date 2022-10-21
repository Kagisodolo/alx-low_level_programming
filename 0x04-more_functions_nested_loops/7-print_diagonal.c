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
			j = 0;

			while (j < i)
			{
				_putchr(' ');
				j++;
			}

			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
