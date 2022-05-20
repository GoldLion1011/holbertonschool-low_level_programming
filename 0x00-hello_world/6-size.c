#include<stdio.h>
/**
*main - entry point
*sizeof
*return - always 0
**/
int main(void)
{
	printf("Size of a char: %lu byte\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long));
	printf("Size of a long long int: %lld bytes\n", sizeof(long long));
	printf("Size of a float: %f bytes\n", sizeof(float));
	return (0);
}
