#include "main.h"
/**
 * _memset - Sets something
 * @s: pointer
 * @b: pointer
 * @n: pointer
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
