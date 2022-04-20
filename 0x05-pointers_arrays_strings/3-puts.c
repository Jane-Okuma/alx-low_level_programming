#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts - prints on stdout
 *
 * @str : string to be printed
 * Return: returns nothing
 */
void _puts(char *str)
{
	int size = strlen(str);

	int i = 0;

	while (i <= size)
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
