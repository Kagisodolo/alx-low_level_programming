#include "main.h"

/**
 * puts_half -  a function that prints half of a string.
 * @str: input string to be printed.
 * Return: void.
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
		i++;

	if ((i + 1 % 2) == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	n++;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
