#include <stdio.h>
/**
 * main - This is entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a[10];

	int b[10];

	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		a[i] = i;

		b[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] < b[j] && a[i] != b[j])
			{
				putchar(a[i] + '0');
				putchar(b[j] + '0');
				if (a[i] != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
