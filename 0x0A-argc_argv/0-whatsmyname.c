#include <stdio.h>
#include <string.h>
/**
 * main - contains code
 * @argc: argument counter
 * @argv: array of arguments present
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
