#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of string
 *
 * @s : points to s
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size = size + 1;
		s++;
	}
	return size;
}
