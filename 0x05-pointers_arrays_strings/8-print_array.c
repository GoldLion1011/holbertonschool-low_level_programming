#include "main.h"
#include <stdio.h>

/**
  * print_array - prints the elements of an array
  * @n: elements of the array
  * Return: void (Success)
  */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		printf("%d", a[x]);
		if (x != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
