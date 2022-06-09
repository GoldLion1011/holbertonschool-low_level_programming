#include "main.h"

int find_sqrt(int num, int root);
int sqrt_recursion(int n);

/**
  * find_sqrt - finds natural square root of a number
  * @num: number to find sq root of
  * @root: root to test
  * Return: square root if number has one
  *         -1 if number doesn't have one
  */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
  * _sqrt_recursion - returns natural squar root of a number
  * @n: number to return sq root of
  * Return: natural sq root of n if true
  *         -1 if false
  */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
