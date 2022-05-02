#include <stdio.h>
#include <string.h>
/**
 * main - contains code
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
	if (argc > 1 && argv[0] != NULL)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
