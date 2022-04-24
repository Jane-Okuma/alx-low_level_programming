#include "main.h"
/**
 * _strcat -  concatenates two strings
 * @dest : destination string
 * @src : source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_size = 0;

	int src_size = 0;


	while (*(dest + dest_size) != '\0')
	{
		dest_size++;
	}
	while (*(src + src_size) != '\0')
	{
		src_size++
	}
	int i;

	for (i = 0; i <= src_size; i++)
	{
		*(dest + dest_size) = *(src + i);
		dest_size++;
	}
	return (dest);
}
