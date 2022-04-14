#include "main.h"
/**
 * print_numbers - print 0 to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	char st[] = "0123456789";

	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(st[i]);
	}
	_putchar('\n');
}
