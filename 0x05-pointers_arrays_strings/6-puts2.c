#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - idk
 *
 * @str : idk
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while(*str != '\0')
	{
		putchar(*(str + i));
		i = i + 2;
	}
}
