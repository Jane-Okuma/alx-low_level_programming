#include "main.h"
/**
 * _isalpha - returns 1 if character is an alphabet
 *
 * @c : character in ASCII
 * Return: Always 0;
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
