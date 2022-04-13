#include "main.h"
/**
 * jack_bauer - print 24 hours
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (sizeof(i) / sizeof(int) == 1)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else if (sizeof(i) / sizeof(int) == 2)
			{
				int a = i / 10;

				char a = (char) a;

				int b = i % 10;
				
				char b = (char) b;

				_putchar(a + '0');
				_putchar(b + '0');
			}
			_putchar(':');
			if (sizeof(j) / sizeof(int) == 1)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else if (sizeof(j) / sizeof(int) == 2)
			{
				int a = j / 10;

				char a = (char) a;

				int b = j % 10;

				char b = (char) b;

				_putchar(a + '0');
				_putchar(b + '0');
			}
			_putchar('\n');
		}
	}
}
