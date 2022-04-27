#include "main.h"
/*
 * _strspn - soes something
 * @s - string that is searched through
 * @accept - search substring
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	int j;

	unsigned int ln = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) == *(accept + i))
			{
				ln++;
				break;
			}
		}
	}
	return (ln);
}
