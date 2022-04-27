#include "main.h"
/**
 * _strchr - finds char in string
 * @s: pointer to string s
 * @c: character to locate in string s
 * Return: pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == '\0')
		return ('\0');
}
