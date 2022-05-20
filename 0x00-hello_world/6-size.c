#include<stdio.h>
/**
*main - entry point
*return - always 0
**/
int main(void)
{
	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("Size of an int: %ld bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long));
	printf("Size of a float: %ld bytes\n", sizeof(float));
	return (0);
}
