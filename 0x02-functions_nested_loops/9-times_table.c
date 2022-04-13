#include "main.h"
/**
 * times_table - print shit
 *
 * Return: always 0
 */
void times_table(void)
{
	int i, j;
	
	for (i = 1; i < 10; i++)
	{
		_putchar('0');
		for (j = 0; j < 10; j++)
		{
			int a = i * j'

			_putchar(',');
			_putchar(' ');
			if (a <= 9)
			{
				_putchar(' ');
				_putchar('0' + a);
			}
			else
			{
				_putchar((a / 10) + 48);
				_putchar((a % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
