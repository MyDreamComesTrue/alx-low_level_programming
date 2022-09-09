#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point who will print according to if else statements
 * @n: Random number who will be printed
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
