#include<stdio.h>
/**
 * main - This is the main
 *
 * Return: Ends program
 */
int main(void)
{
	char string[55] = "and that piece of art is useful\" Dora Korpar, 25-10-19\n";
	for(int i = 0; i < 55; i++)
		putchar(string[i]);
	return (0);
}
