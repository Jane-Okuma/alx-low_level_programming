#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints the second half of a string
 *
 * @str : pointer
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = strlen(str);

	i = i - 1;

	int j;

	if (i % 2 != 0)
	{
		j = (i - 1) / 2;
	}
	else
	{
		j = i / 2;
	}
	while (j <= i)
	{
		putchar(*(str + j));
		j++;
	}
	putchar('\n');
}
