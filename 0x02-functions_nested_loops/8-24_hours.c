#include "main.h"

/* jack_bauer -  a function that prints every minute of the day of Jack.
 *
 * Return: void.
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for minute =0; minute <=59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mionute / 10) + '0');
			_putchar((minue % 10) + '0');
			_putchar('\n');
		}
	}
}
