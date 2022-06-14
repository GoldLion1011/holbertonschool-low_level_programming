#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the sum of two numbers followed by a new line
  * @argc: number of arguments passed to program
  * @argv: arrays of pointers to arguments
  * Return: (1) if a given number is a nondigit char
  *         (0) all else
  */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
