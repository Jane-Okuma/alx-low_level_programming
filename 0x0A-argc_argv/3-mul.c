#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - contains the code
 * @argc: argument counter
 * @argv: array containing arguments
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
	int a, b, mul;
	if (argc < 3)
		printf("Error\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n",mul);
	}
	return (0);
}
