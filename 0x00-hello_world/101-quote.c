#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints exact text to standard error.
 *
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
