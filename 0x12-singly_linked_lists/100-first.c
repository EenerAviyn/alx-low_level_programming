#include <stdlib.h>
#include <stdio.h>

void first(void) __attrribute__((constructor));

/**
 * first - prints phase before main is executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

