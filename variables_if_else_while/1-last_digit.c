#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 * more headers goes there
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	r = n % 10;

	if (r > 5)
	{
		printf("Last digit of %d is %d and is grater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("Last digit of %d and is %d  0\n", n, r);
	}
	else if (r < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}
	return (0);
}
