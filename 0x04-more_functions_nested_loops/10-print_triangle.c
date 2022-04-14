#include "main.h"
/**
 * print_triangle - Print trianles
 *
 * @size : size of triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		int k;

		for (i = 0; i < size; i++)
		{
			for (j = size; j < 1; j--)
			{
				_putchar(' ');
			}
			for (k = i; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
