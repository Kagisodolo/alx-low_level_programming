#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase.
 *
 * Return: 0.
 */

int main(void)
{
	char number[] = "0123456789abcdef\n";
	int i = 0;

	while (number[i] != 0)
	{
		putchar(number[i]);
		i++;
	}
	return (0);
}
