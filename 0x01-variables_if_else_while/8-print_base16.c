#include <stdio.h>
/**
 * main - This is main
 *
 * Return:returns 0
 */
int main(void)
{
	char alpha[] = "0123456789abcdef";

	int n;

	for (n = 0; n < 16; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}
