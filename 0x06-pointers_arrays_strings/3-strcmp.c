#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string2
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int count1 = 0;

	int diff = 0;

	while (diff == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
		{
			break;
		}
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}
