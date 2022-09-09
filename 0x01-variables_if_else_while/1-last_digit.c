#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int n  = rand() - RAND_MAX / 2;

	int nl = n % 10;

	srand(time(0));

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nl);
	else if (nl == 0)
		printf("Last digit of %d is %d and is 0\n", n, nl);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nl);
	return (0);

}
