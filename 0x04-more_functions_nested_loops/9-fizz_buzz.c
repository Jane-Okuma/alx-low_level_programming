#include <stdio.h>
/**
 * main - Contains code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
			printf(" ");
		}
		else if (!(i % 3 == 0) && i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	return (0);
}
