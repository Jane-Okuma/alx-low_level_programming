#include <stdio.h>
/**
 * main - This is a main function
 *
 * Return: return 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	char uppalpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	for (n = 0; n < 26; n++)
	{
		putchar(uppalpha[n]);
	}
	putchar('\n');
	return (0);
}
