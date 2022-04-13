#include "main.h"
/**
 * print_last_digit - Prints the last digit of a given integer
 *
 * @a : integer number
 * Return: Always 0
 */
int print_last_digit(int a)
{
	if (a >= 0)
	{
		return (a % 10);
	}
	else
	{
		return ((-1 * a) % 10);
	}
}
