#include "main.h"
/**
 * _strncat - i'm lazy
 * @dest: destination
 * @src: source
 * @n: number of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_size = 0;

	int i = 0;

	while (*(dest + dest_size) != '\0')
	{
		dest_size++;
	}
	while (i < n)
	{
		*(dest + dest_size) = *(src + i);
		dest_size++;
		i++;
	}
	return (dest);
}
