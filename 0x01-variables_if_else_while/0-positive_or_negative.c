#include <stdlib.h>
#include <time.h>
/* more headers go here */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0) {
		printf("%d is positive");
	}
	else if (n == 0) {
		printf("%d is zero");
	}
	else if (n < 0) {
		printf("%d is negative");
	}
	return (0);
}
