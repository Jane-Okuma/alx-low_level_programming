#include <stdio.h>
/**
 * main - This is a main function
 *
 * Return: return 0
 */
int main(void)
{
	char uppalpha[] = "abcdefghijklmnopqrstuvwxyz";

	int n;

	for (n = 25; n <= 0; n--)
	{
		putchar(uppalpha[n]);
	}
	putchar('\n');
	return (0);
}
