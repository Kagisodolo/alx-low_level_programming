#include <stdio.h>

/**
 * main - print lowercase alphabet.
 *
 * Return: 0.
 */

int main(void)
{
	char alphabets = 'a';

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
