#include<stdio.h>
#include "main.h"
/**
 * _isupper - check if character is in upper case
 *
 * @c : ASCII code of a character
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
