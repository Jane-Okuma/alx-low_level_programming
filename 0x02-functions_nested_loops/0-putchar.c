#include "main.h"
/**
 * main - always check code
 *
 * Return: 0 always
 */
int main(void)
{
	char st[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(st[i]);
	}
	_putchar('\n');
	return (0);
}
