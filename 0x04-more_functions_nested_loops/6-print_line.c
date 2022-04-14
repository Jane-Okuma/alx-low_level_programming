#include "main.h"
/**
 * print_line - prints line
 *
 * @n : number of times
 * Return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
