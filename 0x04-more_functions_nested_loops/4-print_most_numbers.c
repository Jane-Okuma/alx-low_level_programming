#include "main.h"
/**
 * print_most_numbers - Prints all numbers from 0 to 9 except 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	char st[] = "0123456789";

	int i;

	for (i = 0; i < 10; i++)
	{
		if (st[i] != 50 && st[i] != 52)
		{
			_putchar(st[i]);
		}
	}
	_putchar('\n');

}
