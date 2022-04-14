#include "main.h"
/**
 * _isupper - check if character is in upper case
 *
 * @c : ASCII code of a character
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
