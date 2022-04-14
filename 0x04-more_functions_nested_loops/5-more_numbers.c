#include "main.h"
/*
 * more_numbers - Print 0 to 10 14 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 63; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
