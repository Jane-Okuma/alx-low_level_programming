#include <stdio.h>
/**
 * main - This is main
 *
 * Return:returns 0
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";

	int n;

	for (n = 0; n < 24; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}
