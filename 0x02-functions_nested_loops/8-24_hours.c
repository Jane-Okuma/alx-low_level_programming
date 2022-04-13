#include "main.h"
/**
 * jack_bauer - print 24 hours
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i,j;

	for (i = 0; i < 24; i++)
	{
		if (sizeof(i) / sizeof(int) == 1)
		{
			_putchar('0');
		}
		_putchar('0' + i);
		_putchar(':');
		for (j = 0; j < 60; j++)
		{
			if (sizeof(i) / sizeof(int) == 1)
			{
				_putchar('0');
			}
			_putchar('0' + j);
		}
	}
}
