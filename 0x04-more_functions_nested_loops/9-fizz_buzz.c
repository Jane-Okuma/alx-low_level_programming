#include <stdio.h>
/**
 * main - Contains code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf(" Fizz");
		}
		else if (!(i % 3 == 0) && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	return (0);
}
