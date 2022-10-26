#include "main.h"

/**
 * print_array - prints certain number of elements in array.
 * @a: input array holding elements to print.
 * @n: input parameter specifying number of elements to print.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i] + '\0');

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar('\n');
	}
}
