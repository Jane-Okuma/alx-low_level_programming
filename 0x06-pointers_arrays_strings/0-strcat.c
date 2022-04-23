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
	int dest_size = strlen(dest);

	int src_size = strlen(src);

	int i;

	int j = 0;

	for (i = dest_size - 1; i < (dest_size - 1) + src_size; i++)
	{
		if (j < size)
		{
			*(dest + i) = *(src + j);
		}
		j++
	}
	return (*dest);
}
