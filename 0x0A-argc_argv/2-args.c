#include <stdio.h>
#include <string.h>
/**
 * main - contains the code
 * @argc: argument counter
 * @argv: array containing arguments
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
