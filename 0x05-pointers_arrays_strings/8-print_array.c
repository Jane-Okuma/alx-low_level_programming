#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints array
 *
 * @a : pointer
 * @n : number of elements to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
