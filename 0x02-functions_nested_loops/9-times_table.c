#include "main.h"
/**
 * times_table - print shit
 *
 * Return: always 0
 */
void times_table(void)
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int a = i * j;
			_putchar('0' + a);
		}
	}
}
