#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints value of two numbers multiplied followed by a new line
  * @argc: number of arguments passsed to program
  * @argv: arrays of pointers to arguments
  * Return: (0) if prog recieves 2 arguments
  *         (1) if prog does not recieve two arguments
  */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
