#include "main.h"

/**
  *
  *
  *
  *
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_prime_number(n));
}
