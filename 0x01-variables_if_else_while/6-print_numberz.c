#include <stdio.h>
/**
 * main - This is a main function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char a = i + '0';

		putchar(a);
	}
	putchar('\n');
	return (0);
}
