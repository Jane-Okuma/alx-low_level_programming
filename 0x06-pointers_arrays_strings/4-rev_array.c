#include "main.h"
/**
 * reverse_array - reverses an array's items
 * @a: array
 * @n: number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b[n];

	int i;

	for (i = 0; i < n; i++)
	{
		b[i] = *(a + i);
	}
	int j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		*(a + j) = b[i];
		j++;
	}
}
