#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenate 2 strings
 *
 * @dest : destination of concat
 * @src : source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_size = 0;

	int src_size = 0;

	while (*dest != '\0')
	{
		dest_size++;
		dest++;
	}
	while (*src != '\0')
	{
		src_size++;
		src++;
	}
	int i;

	int j = 0;

	for (i = dest_size - 1; i < (dest_size - 1) + src_size; i++)
	{
		if (j < src_size)
		{
			*(dest + i) = *(src + j);
		}
		j++;
	}
	return (*dest);
}
