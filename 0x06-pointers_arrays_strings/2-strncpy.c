#include "main.h"
/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: number of strings to copy from source
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i > n)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
