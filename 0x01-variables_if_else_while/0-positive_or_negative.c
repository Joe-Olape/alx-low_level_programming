#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print a random number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n, n");
	else
		print(f"%d is zero"\n, n);
	return (0);
}
