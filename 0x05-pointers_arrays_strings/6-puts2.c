#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - idk
 *
 * @str : pointer
 * Return: 0
 */
void puts2(char *str)
{
	int size = strlen(str);

	int i = 0;

	while (i < size)
	{
		putchar(*(str + i));
		i = i + 2;
	}
	putchar('\n');
}
