#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: input integer whose value will be swapped with value of b.
 * @b: input integer whose value will be swapped with value of a.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int holder = *a;

	*a = *b;
	*b = holder;
}
