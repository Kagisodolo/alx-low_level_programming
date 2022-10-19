#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n : the input number to be operated.
 * Return: last digit of a number then success.
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit);
	return (lastDigit);
}
