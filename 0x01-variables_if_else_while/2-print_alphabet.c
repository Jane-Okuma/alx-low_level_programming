#include <stdio.h>
/**
 * main - This is main
 *
 * Return:returns 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}
