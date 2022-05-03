#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts number of paramaters that go into main
 * @argv: pointer of array of pointers containing strings 
 * entering main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

