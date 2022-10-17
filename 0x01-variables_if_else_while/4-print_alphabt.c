#include <stdio.h>

/**
 * main - print lowercase alphabet excluding e & q.
 *
 * Return: 0.
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
