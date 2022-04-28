#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: pointer that points to string s
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
