#include "main.h"
/**
 * _strpbrk - does something
 * @s: pointer
 * @accept: pointer
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	int ln = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				ln = 1;
				return (s + i);
			}
		}
	}
	if (ln == 0)
		return ('\0');
}
