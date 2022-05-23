#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  *
  * random number generator
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n < 0)
	{
		printf("is negative\n");
	}
	if (n == 0)
	{
		printf("0\n");
	}
	return (0);
}