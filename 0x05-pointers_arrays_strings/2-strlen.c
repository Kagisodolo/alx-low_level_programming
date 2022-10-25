#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: input string pointer.
 * Return: length of the input string.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len += 1;
	}

	return (len);
}
