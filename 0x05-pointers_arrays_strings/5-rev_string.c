#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - Prints the reverse of a string
 *
 * @s : points to string s
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = strlen(s);

	int k = 0;

	while (i >= 0)
	{
		int j = i;

		s[k] = *(s + j);

		i--;
		k++;
	}
	putchar('\n');
}
