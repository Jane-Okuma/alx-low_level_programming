#include "main.h"
/**
 * swap_int - swap values
 *
 * @a : points to a
 * @b : points to b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int *c = b;

	*b = *a;
	*a = *c;
}
