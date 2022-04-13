#include "main.h"
/**
 * print_last_digit - Prints the last digit of a given integer
 *
 * @a : integer number
 * Return: Always 0
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
