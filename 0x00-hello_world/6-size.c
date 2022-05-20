#include<stdio.h>
/**
*main - entry point
*return - always 0
**/
int main(void)
{
	printf("Size of a char: %lu byte\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long));
	printf("Size of a float: %lu bytes\n", sizeof(float));
	return (0);
}
