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

	while (i - 1 >= 0)
	{
		int j = i - 1;

		putchar(*(s + j));
		i--;
	}
	putchar('\n');
}
