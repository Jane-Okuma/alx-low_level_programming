#include "main.h"
#include <stdio.h>
/**
 * _puts - prints on stdout
 *
 * @str : string to be printed
 * Return: returns nothing
 */
void _puts(char *str)
{
	int size = _strlen(*str);

	int i = 0;

	while (i < size)
	{
		putchar(*(str + i));
		i++;
	}
}
