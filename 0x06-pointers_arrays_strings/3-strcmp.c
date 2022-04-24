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

	int count2 = 0;

	while (*(s1 + count1) != '\0')
	{
		count1++;
	}
	while (*(s2 + count2) != '\0')
	{
		count2++;
	}
	int check = 0;

	int diff = 0;

	if (count1 <= count2)
		check = count1;
	else
		check = count2;
	int i;

	for (i = 0; i < check; i++)
	{
		diff = *(s1 + i) - *(s2 + i);
		if (diff != 0)
		{
			break;
		}
	}
	return (diff);
}
