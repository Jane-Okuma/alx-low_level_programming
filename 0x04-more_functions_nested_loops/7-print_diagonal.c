#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * @n : number of times
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 0; j < n; j++)
		{
			if (j == 0)
			{
				_putchar('\');
			}
			else
			{
				int k;

				for (k = 0; k < j; k++)
				{
					_putchar(' ');
				}
				_putchar('\');
			}
		}
	}
}
