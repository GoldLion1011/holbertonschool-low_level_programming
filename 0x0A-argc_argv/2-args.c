#include <stdio.h>

/**
  * main - print all arguments a program recieves
  * @argc: number of arguments passed to program
  * @argv: arrays of pointers to arguments
  * Return: Always (0)
  */

int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
		printf("%s\n", argv[g]);

	return (0);
}
