#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: void.
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 13; j++)
			_putchar(i + '0');

		_putchar('\n');
	}
}
