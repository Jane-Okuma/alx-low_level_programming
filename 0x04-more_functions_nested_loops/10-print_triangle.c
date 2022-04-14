#include "main.h"
/**
 * print_triangle - print ts
 *
 * @size : tri size
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;

	int j = 0;

	int k = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			while (j <= size - (i + 1))
			{
				_putchar(' ');
				j++
			}
			j = 0;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			k = 0;
			_putchar('\n');
		}
	}
}
