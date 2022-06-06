#include "holberton.h"

/**
  * reverse_array - reverses content of an array of integers
  * @a: array to reference
  * @n: number of elements in the array
  * Return: void (success)
  */

void reverse_array(int *a, int n)
{
	int i;

	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
