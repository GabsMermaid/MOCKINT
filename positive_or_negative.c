#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);
	if (n == 0)
		puts("is zero");
	else if (n > 0)
		puts("is positive");
	else
		puts("is negative");

	return (0);
}
