#include "main.h"
/**
 * _puts - prints on stdout
 *
 * @str : string to be printed
 * Return: returns nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
