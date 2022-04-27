#include "main.h"
/**
 * _strchr - finds char in string
 * @s: pointer to string s
 * @c: character to locate in string s
 * Return: pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	int j = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == '\0')
		return ('\0');
}
